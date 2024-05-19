#include <ncurses.h>
#include "ca.h"

const int rows = 50;  // grid dimensions
const int cols = 196;  // grid dimensions
const int N = 55;

int main() 
{
    initscr();
    noecho();

    //get the max screen dimensions
    int y, x;
    getmaxyx(stdscr, y, x); 
    
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_WHITE);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);

    // initiate grid for user to manipulate initial state
    attron(COLOR_PAIR(2));
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            mvprintw(i, j*2, "  ");
        }
    }
    attroff(COLOR_PAIR(2));

    // Draw title in new window
    pixeltitle(y, x);

    // Draw: press any key to continue
    attron(COLOR_PAIR(2));
    mvprintw(y/2 + 4, x/2 - 11*2, "Press any key to continue!");
    getch();
    attroff(COLOR_PAIR(2));

    // reset grid
    attron(COLOR_PAIR(2));
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            mvprintw(i, j*2, "  ");
        }
    }
    attroff(COLOR_PAIR(2));

    // Printw instructions
    attron(COLOR_PAIR(2));
    mvprintw(y/2-5, x/2 - 12*2, "How to use:");
    mvprintw(y/2-4, x/2 - 9*2, "Move curser : arrow keys");
    mvprintw(y/2-3, x/2 - 9*2, "Change cell state : spacebar");
    mvprintw(y/2-2, x/2 - 9*2, "Start/stop automation : 'w'");

    
    getch();
    attroff(COLOR_PAIR(2));

    

    // Create a new window with the same size as the screen
    WINDOW *win = newwin(N, N*2, 2, 20*2);

    // Set the color and draw the border
    wattron(win, COLOR_PAIR(1));
    wborder(win, '|', '|', '-', '-', '+', '+', '+', '+'); // Custom characters
    wattroff(win, COLOR_PAIR(1));

    // Refresh the window to show the border
    wrefresh(win);
    delwin(win);



    // Initialize 2D bool array (dead/alive)
    bool grid[53][54] = {false};

    //let user manipulate grid state
    keypad(stdscr, TRUE);   // activate keypad for arrow key indput
    
    // set curser in the center
    int xpos = 93;
    int ypos = 27;
    mvprintw(ypos, xpos, "<>");

    bool color = false;
    int c;

    // user initiates seed
        setting(c, color, xpos, ypos, grid); 



    // create new window for to display automization (+ copy grid)
    WINDOW *display = newwin(53, 108, 3, 41);
    bool copy[53][54];

    //set automization speed
    timeout(150);
    
    while(1)
    {
        // Generate next generation into new-grid (This ensures that each cell updates without being effected by the adjacent cells updated state)
        for (int i = 0; i < 53; i++)
        {
            for (int j = 0; j < 54; j++)
            {  
                // count living adjacent cells
                int count = 0;
                
                for (int k = -1; k < 2; k++)
                {
                    for (int l = -1; l < 2; l++)
                    {
                        if (grid[i + k][j + l] == true && (k != 0 || l != 0))     //<-- ensuring that center cell isn't handled as an adjacent cell
                        {
                            //check if adjacent cells are in bound
                            if (i + k < 1 || i + k > 52)
                            {
                                continue;
                            }
                            else if (j + l < 1 || j + l > 53)
                            {
                                continue;
                            }
                            count++;
                        }
                    }
                }
                
                // update cell if it's live
                if (grid[i][j] == true)
                {
                    // Rule 1: "Any live cell with fewer than two live neighbors dies."
                    // Rule 3: "Any live cell with more than 3 living neighbors dies."
                    if (count < 2 || count > 3)
                    {
                        copy[i][j] = false;
                    }

                    // Rule 2: "Any live cell with two or three living neighbors lives."
                    else
                    {
                        copy[i][j] = true;
                    }
                    
                }
                
                // Rule 4: "Any dead cell with 3 living neighbors becomes a live cell."
                else if (grid[i][j] == false && count == 3)
                {
                    copy[i][j] = true;
                }
                // Otherwise it stays dead.
                else
                {
                    copy[i][j] = false;
                }
            }
        }
        // Copy the next-grid into the main-grid
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                grid[i][j] = copy[i][j];
            }
        }

        //display the following generation
        for (int i = 0; i < 53; i++)
        {
            for (int j = 0; j < 54; j++)
            {
                if (grid[i][j] == false)
                {
                    mvwprintw(display, i, j*2, "  ");
                }
                else if (grid[i][j] == true)
                {
                    wattron(display, COLOR_PAIR(1));
                    mvwprintw(display, i, j*2, "  ");
                    wattroff(display, COLOR_PAIR(1));
                }
            }
        }
        wrefresh(display);
        int c = getch();
        if (c == 'w')   // handle spacebar to stop program
        {
            break;
        }
    }
    

    delwin(display);
    endwin();

    return 0;
}
