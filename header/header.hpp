#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <string>
# include <curses.h>

typedef struct          s_list {
    void                *data;
    struct s_list       *next;
}                       t_list;

# define FPS            7 // (* 10) ms

#endif