#include <curses.h>

void pixeltitle(int y, int x)
{
    init_pair(1, COLOR_WHITE, COLOR_WHITE);
    attron(COLOR_PAIR(1));

    // C in Conway
    int start_x = x/4;
    int start_y = y/4;
    mvprintw(start_y + 0, start_x + 2*2, "      ");
    mvprintw(start_y + 1, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 5*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 4, start_x + 0*2, "  ");
    mvprintw(start_y + 5, start_x + 6*2, "  ");
    mvprintw(start_y + 6, start_x + 1*2, "  ");
    mvprintw(start_y + 5, start_x + 0*2, "  ");
    mvprintw(start_y + 7, start_x + 2*2, "      ");
    mvprintw(start_y + 6, start_x + 5*2, "  ");

    // O in conway
    start_x += 6*2;
    start_y += 3;
    mvprintw(start_y + 0, start_x + 1*2, "    ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 3*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 3*2, "  ");
    mvprintw(start_y + 3, start_x + 1*2, "    ");

    // N in conway
    start_x += 5*2;
    start_y += 1;
    mvprintw(start_y + 0, start_x + 0*2, "      ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 3*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 3*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 3*2, "  ");

    // W in conway
    start_x += 5*2;
    start_y += -1;
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 0, start_x + 6*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 6*2, "  ");
    mvprintw(start_y + 2, start_x + 3*2, "  ");
    mvprintw(start_y + 2, start_x + 5*2, "  ");
    mvprintw(start_y + 3, start_x + 1*2, "  ");
    mvprintw(start_y + 3, start_x + 3*2, "  ");
    mvprintw(start_y + 3, start_x + 5*2, "  ");
    mvprintw(start_y + 4, start_x + 2*2, "  ");
    mvprintw(start_y + 4, start_x + 4*2, "  ");

    // A in conway
    start_x += 7*2;
    start_y += 1;
    mvprintw(start_y + 0, start_x + 1*2, "    ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 3*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 3*2, "  ");
    mvprintw(start_y + 3, start_x + 1*2, "    ");
    mvprintw(start_y + 3, start_x + 4*2, "  ");

    // Y in conway's
    start_x += 5*2;
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 0, start_x + 5*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 4*2, "  ");
    mvprintw(start_y + 2, start_x + 1*2, "  ");
    mvprintw(start_y + 2, start_x + 4*2, "  ");
    mvprintw(start_y + 3, start_x + 2*2, "    ");
    mvprintw(start_y + 4, start_x + 3*2, "  ");
    mvprintw(start_y + 5, start_x + 0*2, "  ");
    mvprintw(start_y + 5, start_x + 3*2, "  ");
    mvprintw(start_y + 6, start_x + 1*2, "    ");

    // 'S in conway's
    start_x += 7*2;
    start_y += -2;
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 2*2, "    ");
    mvprintw(start_y + 2, start_x + 1*2, "  ");
    mvprintw(start_y + 3, start_x + 2*2, "    ");
    mvprintw(start_y + 4, start_x + 0*2, "  ");
    mvprintw(start_y + 4, start_x + 3*2, "  ");
    mvprintw(start_y + 5, start_x + 1*2, "    ");

    // game of life
    start_x = x/4 - 1;      // G(ame)
    start_y = (y/4) + 11;
    mvprintw(start_y + 0, start_x + 1*2, "    ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 2*2, "    ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 3*2, "  ");
    mvprintw(start_y + 4, start_x + 1*2, "    ");

    start_x += 5*2;     // g(A)me
    start_y += 1;
    mvprintw(start_y + 0, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 2*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "      ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 2*2, "  ");

    start_x += 4*2;     // ga(M)e
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 0, start_x + 4*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "    ");
    mvprintw(start_y + 1, start_x + 3*2, "    ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 2*2, "  ");
    mvprintw(start_y + 2, start_x + 4*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 2*2, "  ");
    mvprintw(start_y + 3, start_x + 4*2, "  ");

    start_x += 6*2;     // gam(E)
    start_y += -1;
    mvprintw(start_y + 0, start_x + 0*2, "    ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "    ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 4, start_x + 0*2, "    ");

    start_x += 5*2;     // of
    start_y += 3;
    mvprintw(start_y - 1, start_x + 0*2, "  ");
    mvprintw(start_y + 0, start_x - 1*2, "  ");
    mvprintw(start_y + 0, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    start_x += 3*2; 
    start_y += -3;
    mvprintw(start_y + 0, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 2*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "    ");
    mvprintw(start_y + 4, start_x + 0*2, "  ");

    start_x += 5*2;     // life
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 4, start_x + 0*2, "  ");
    start_x += 2*2; 
    start_y += 1;
    mvprintw(start_y + 0, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    start_x += 2*2; 
    start_y += -1;
    mvprintw(start_y + 0, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 1, start_x + 2*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "  ");
    mvprintw(start_y + 3, start_x + 0*2, "    ");
    mvprintw(start_y + 4, start_x + 0*2, "  ");
    start_x += 4*2; 
    mvprintw(start_y + 0, start_x + 1*2, "  ");
    mvprintw(start_y + 1, start_x + 0*2, "  ");
    mvprintw(start_y + 2, start_x + 0*2, "    ");
    mvprintw(start_y + 3, start_x + 0*2, "  ");
    mvprintw(start_y + 4, start_x + 0*2, "    ");
    attroff(COLOR_PAIR(1));
    curs_set(0);
}


void setting(int c, bool color, int xpos, int ypos, bool grid[53][54])
{
    while(1)
    {
        c = getch();

            switch(c)
            {
                case KEY_UP:
                    // border limit
                    if (ypos <= 3)
                    {
                        continue;
                    }
                    
                    // removing the curser for previous position
                    if (color == true)
                    {
                        mvprintw(ypos, xpos, "  ");
                        attroff(COLOR_PAIR(1));
                    }
                    if (color == false)
                    {
                        mvprintw(ypos, xpos, "  ");
                    }
                    ypos--;
                    if (grid[ypos-3][(xpos-41)/2] == true)   //check for dead/alive
                    {
                        attron(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                        color = true;
                    }
                    else if (grid[ypos-3][(xpos-41)/2] == false)
                    {
                        attroff(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                    }
                    continue;

                case KEY_DOWN:
                    if (ypos >= 55) // border limit
                    {
                        continue;
                    }
                    
                    // removing the curser for previous position
                    if (color == true)
                    {
                        mvprintw(ypos, xpos, "  ");
                        attroff(COLOR_PAIR(1));
                    }
                    if (color == false)
                    {
                        mvprintw(ypos, xpos, "  ");
                    }
                    ypos++;
                    if (grid[ypos-3][(xpos-41)/2] == true)   //check for dead/alive
                    {
                        attron(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                        color = true;
                    }
                    else if (grid[ypos-3][(xpos-41)/2] == false)
                    {
                        attroff(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                    }
                    continue;
                    
                case KEY_LEFT:
                    // border limit
                    if (xpos <= 41)
                    {
                        continue;
                    }
                    
                    // removing the curser for previous position
                    if (color == true)
                    {
                        mvprintw(ypos, xpos, "  ");
                        attroff(COLOR_PAIR(1));
                    }
                    if (color == false)
                    {
                        mvprintw(ypos, xpos, "  ");
                    }
                    xpos -= 2;
                    //updating coloring setting appropriately
                    if (grid[ypos-3][(xpos-41)/2] == true)   //check for dead/alive
                    {
                        attron(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                        color = true;
                    }
                    else if (grid[ypos-3][(xpos-41)/2] == false)
                    {
                        attroff(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                    }
                        continue;

                case KEY_RIGHT:
                    // border limit
                    if (xpos >= 147)
                    {
                        continue;
                    }
                    // removing the curser for previous position
                    if (color == true)
                    {
                        mvprintw(ypos, xpos, "  ");
                        attroff(COLOR_PAIR(1));
                    }
                    if (color == false)
                    {
                        mvprintw(ypos, xpos, "  ");
                    }
                    xpos += 2;
                    //updating coloring setting appropriately
                    if (grid[ypos-3][(xpos-41)/2] == true)   //check for dead/alive
                    {
                        attron(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                        color = true;
                    }
                    else if (grid[ypos-3][(xpos-41)/2] == false)
                    {
                        attroff(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                    }
                        continue;

                case ' ':  // change cell state
                    if (grid[ypos-3][(xpos-41)/2] == false)
                    {
                        grid[ypos-3][(xpos-41)/2] = true;
                        attron(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");
                        color = true;
                    }
                    else if (grid[ypos-3][(xpos-41)/2] == true)
                    {
                        grid[ypos-3][(xpos-41)/2] = false;
                        attroff(COLOR_PAIR(1));
                        mvprintw(ypos, xpos, "<>");          
                    }
            }
        
        // handle enter (start automization)
        if (c == 'w')
        {
            break;
        }
    }
}