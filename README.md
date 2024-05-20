# Cellular-Automata / Conway's game of life
This project implements Conway's game of life (also refered to as cellular automata) in C with a TUI that runs under a terminal-emulator. The Ncurses library was used to create the application's 2D game-like user interface.

## Briefly about Conway's game of life
Conway's game of life operates under a simple set of conditions. It's described by the creator, John Horton Conway, as a zero player game, meaning that it operates solely based on it's initial state set by the user. The initial state of the game is the specific arrangement of living and dead cells on a two dimensional grid. This is also refered to as the game seed throughout the code. For each generation the state of a specific cell is determined by the state of it's adjacent 8 cells. The rules goes as follows: 
- Any living cell with less than two living neighbors dies. 
- Any living cell with exactly than two or three living neighbors lives on. 
- Any living cell with more than three living neighbors dies. 
- Any dead cell with exactly three living neighbors lives next generation. 

## Installation & How to use
The program can be executed either by downloading the documents through a zipfile or cloning the repository to a local device through the following commandline argument: `git clone https://github.com/Robinwohner/Cellular-Automata`. Compile the program with the Ncurses library: `gcc -o ca ca.c -lncurses`. Finally maximize the terminal window and run the program: `./ca`. 
