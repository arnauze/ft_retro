#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <curses.h>
# include <time.h>
# include "Position.hpp"

class Position;
typedef struct          s_list {
    Position            *data;
    struct s_list       *next;
}                       t_list;

void                    delete_node(t_list *head, t_list *node);
void                    add_node(t_list **head, Position *data);

# define FPS            1 // (* 10) ms

# define ESC_KEY        27
# define UP             119
# define LEFT           97
# define DOWN           115
# define RIGHT          100
# define SPACE          32

#endif