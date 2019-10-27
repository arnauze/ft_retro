#ifndef FRAME_HPP
# define FRAME_HPP

# include "header.hpp"
# include "Player.hpp"
# include "Enemy.hpp"

class                   Frame {
    public:
        Frame(void);
        ~Frame(void);
        Frame(Frame const & frame);
        Frame               &operator=(Frame const & frame);

        void                init(void) const;
        void                gameLoop(void);
        void                printLayout(void) const;

        unsigned int        getSeconds(void) const;
        unsigned int        getScore(void) const;
        void                setSeconds(unsigned int seconds);
        void                setScore(unsigned int score);

    private:
        int                 _seconds;
        int                 _score;
        Player              *player;
        t_list              *enemies;
        t_list              *missiles;
        t_list              *obstacles;

};

#endif