//TODO: gcc clicker.c -lpdcurses -o clicker.exe

#define ERROR 422 

#include<curses.h>
#include<stdlib.h>

typedef unsigned long score;

score chng_score();

int main(){

    score points = 0;
    score check;

    initscr();
    printw("%u", points);
    refresh();
    move(0, 0);
    clrtoeol();

    for(;;){
        check = chng_score();
        if(check == 0) return 0;
        else{
            if(check == ERROR) continue;
            points += check;
            printw("%u", points);
            refresh();
            move(0, 0);
            clrtoeol();
        }
    }
    endwin();
    return 0;
}

score chng_score(){
    char state = getchar();
    if(state != ' ' & state != 'q') return ERROR;
    switch (state)
    {
    case ' ':
        return 1;
        break;
    case 'q':
        return 0;
        break;
    }
}