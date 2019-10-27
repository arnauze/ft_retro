#ifndef FRAME_HPP
# define FRAME_HPP

# include "header.hpp"

class                   Frame {
    public:
        Frame(void);
        ~Frame(void);
        Frame(Frame const & frame);
        Frame               &operator=(Frame const & frame);
        void                init(void) const;
        void                gameLoop(void);
        void                printLayout(void) const;
    private:
        int                 _seconds;
        int                 _score;
        int                 _lives;
};

#endif