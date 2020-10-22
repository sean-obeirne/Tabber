/**
 * @file tabber.c
 * @author Sean O'Beirne
 * @date 18-10-20
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <curses.h>

int height = 0;
int width = 0;

int main(int argc, char *argv[]){
    initscr();
    cbreak();
    noecho();
    width = getmaxx(stdscr);
    height = getmaxy(stdscr);

    

    printf("hello there!\n");

    endwin();
    return(EXIT_SUCCESS);
}
