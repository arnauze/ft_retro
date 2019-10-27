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

Frame::Frame(Frame const & frame) {
    *this = frame;
    return ;
}

Frame           &Frame::operator=(Frame const & frame) {
    this->setSeconds(frame.getSeconds());
    this->setScore(frame.getScore());
    return ;
}

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
    //              -> If the key pressed was the ESCAPE_KEY then we exit the game

    bool        alive = true;
    int         tick = -1;      // Variable incrementing every while loop to give a rythm to the game

    while (alive) {

        if ((++tick % 10) == 0)     //  If we don't receive input we will loop every 10ms, so
            this->_seconds += 1;    //  every 10 ticks I increase the timer of 1s 

        this->printLayout();        //  I print the arena

        char c = getch();           //  Wait 10ms for an input
        
        if (c == ESC_KEY)           // Handle the input
            break;

        refresh();                  // Refresh the screen with the new informations

    }
    endwin();                       // If we get out of the loop then we destroy the window and leave the game
}

void            Frame::printLayout(void) const {

    //  Function handling the printing of the game arena

    int         x_max = getmaxx(stdscr);
    int         y_max = getmaxy(stdscr);
    int         i = -1;

    std::ostringstream   seconds;
    std::ostringstream   score;
    std::ostringstream   lives;

    // Building the informations strings

    seconds << "Time: " << this->_seconds;
    score << "Score: " << this->_score;
    lives << "Lives: " << this->_lives;

    // Writing the messages in the top and bottom bar

    mvaddstr(1, 8, seconds.str().c_str());
    mvaddstr(1, x_max - 14, score.str().c_str());
    mvaddstr(y_max - 2, 8, lives.str().c_str());
    mvaddstr(y_max - 2, x_max - 19, "Controllers");

    // Drawing the top bar and bottom bar

    while (++i < 3)
        mvaddch(y_max - 1 - i, 25, '|');
    i = -1;
    while (++i < 3)
        mvaddch(i, 25, '|');
    i = -1;
    while (++i < x_max)
        mvaddch(3, i, '-');
    i = -1;
    while (++i < x_max)
        mvaddch(y_max - 4, i, '-');
}