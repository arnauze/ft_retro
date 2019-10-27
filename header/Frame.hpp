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
        void                setPlayer(Player *player);
        void                setEnemies(t_list *enemies);
        void                addEnemy(Position *p);

    private:
        int                 _seconds;
        int                 _score;
        Player              *_player;
        t_list              *_enemies;
        // t_list              *_missiles;
        // t_list              *_obstacles;

};

#endif