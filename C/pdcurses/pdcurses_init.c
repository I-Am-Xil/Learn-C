//* gcc pdcurses_init.c -lpdcurses -o pdcurses_init.exe

#include<curses.h>

int main(){
    int ch;
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw("Type any character to see it in bold\n");
    ch = getch();

    if(ch == KEY_F(1)) printw("F1 key pressed");
    else{
        printw("The pressed key is: ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }

    refresh();
    endwin();
    
    return 0;
}