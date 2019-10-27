# include "../header/Frame.hpp"

Frame::Frame(void) : _seconds(0), _score(0), _lives(3) {

    //  Constructor:
    //      Seconds -> 0
    //      Score -> 0
    //      Lives -> 3

    return ;
}

Frame::~Frame(void) {

    // Destructor

    return ;
}

// Frame::Frame(Frame const & frame) {
//     return ;
// }

// Frame           &Frame::operator=(Frame const & frame) {
//     return ;
// }

void            Frame::init(void) const {

    // Function called to initialize the window in ncurses

    initscr();                      // Initialiaze standard screen
    cbreak();                       // Receives input char by char (don't wait for new line anymore)
    noecho();                       // Input is not being echo'ed back to the terminal
    keypad(stdscr, TRUE);           // To receive the extra keys (Arrows, etc)
    curs_set(0);                    // Cursor becomes invisible
    halfdelay(FPS);                 // Input will wait 'FPS' ms and send a default message (system of tick)
    clear();                        // Clear terminal
}

void            Frame::gameLoop(void) {

    // Function handling the main game loop
    // First I print the layout
    // Then I print the game objects
    // Then I wait for input
    //      -> IF no input I receive default message after 10 ms
    //      -> ELSE I receive input and treat it

    bool        alive = true;
    int         tick = -1;

    while (alive) {
        if ((++tick % 10) == 0)
            this->_seconds += 1;
        this->printLayout();
        char c = getch();
        if (c == 27)
            break;
        refresh();
    }
    endwin();
}

void            Frame::printLayout(void) const {

    int         x_max = getmaxx(stdscr);
    int         y_max = getmaxy(stdscr);
    int         i = -1;

    std::ostringstream   seconds;
    std::ostringstream   score;
    std::ostringstream   lives;

    seconds << this->_seconds;
    score << this->_score;
    lives << this->_lives;

    mvaddstr(1, 8, seconds.str().c_str());
    mvaddstr(1, x_max - 14, score.str().c_str());
    mvaddstr(y_max - 2, 8, lives.str().c_str());
    mvaddstr(y_max - 2, x_max - 19, "Controllers");

    while (++i < 3)
        mvaddch(y_max - 1 - i, 20, '|');
    i = -1;
    while (++i < 3)
        mvaddch(i, 20, '|');
    i = -1;
    while (++i < x_max)
        mvaddch(3, i, '-');
    i = -1;
    while (++i < x_max)
        mvaddch(y_max - 4, i, '-');
}