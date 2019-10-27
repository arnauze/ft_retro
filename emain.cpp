#include <vector>

#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "Enemy.hpp"

int main()
{        
int x,y;
int i = 0;
    int j = 0;
    Enemy tmp;
        std::vector<Enemy> enemies; 
    while(i++ < 10)
    { 
        Enemy enemy;
        enemies.push_back(enemy);
    }
        initscr();
        //nodelay(stdscr,true);                   //if there wasn't any key pressed don't wait for keypress
        keypad(stdscr,true);                    //init the keyboard
        noecho();                                                                       //don't write
        curs_set(0);                                                            //cursor invisible
        //getmaxyx(stdscr, y, x);
        while(j++ < enemies.size())
        {   
                tmp = enemies[j];
                tmp.move(1, 0);
                move(tmp.y, tmp.x);	  
                printw("[%d/%d]", tmp.x, tmp.y);
        //enemies[j].announce();
        }	
        usleep(100000); 
	refresh();
	getch();
	endwin();
    return 0;
}

