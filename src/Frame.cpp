# include "../header/Frame.hpp"

Frame::Frame(void) {
    return ;
}

Frame::~Frame(void) {
    return ;
}

// Frame::Frame(Frame const & frame) {
//     return ;
// }

// Frame           &Frame::operator=(Frame const & frame) {
//     return ;
// }

void            Frame::init(void) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    halfdelay(FPS);
    clear();
}

void            Frame::gameLoop(void) {
    int x  = 1;
    while (1) {
        x++;
        mvaddstr(x,0, "Press a button to end");
        char c = getch();
        if (c == 27) {
            endwin();
        } else if (c == ' ') {
            mvaddstr(50,0, "Pause");
            refresh();
        } else {
            mvaddstr(50,0, "No pause");
            refresh();
        }
    }
}