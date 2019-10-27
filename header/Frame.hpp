#ifndef FRAME_HPP
# define FRAME_HPP

# include "header.hpp"
# include "Player.hpp"
# include "Enemy.hpp"
# include "Missile.hpp"

class Player;
class                   Frame {
    public:
        Frame(void);
        ~Frame(void);
        Frame(Frame const & frame);
        Frame               &operator=(Frame const & frame);

        void                init(void) const;
        void                gameLoop(void);
        void                printLayout(void) const;
        void                printObjects(void) const;

        unsigned int        getSeconds(void) const;
        unsigned int        getScore(void) const;
        t_list              *getMissiles(void) const;
        t_list              *getEnemies(void) const;
        void                setSeconds(unsigned int seconds);
        void                setScore(unsigned int score);
        void                setPlayer(Player *player);
        void                setEnemies(t_list *enemies);
        void                setMaxX(int);
        void                setMaxY(int);
        void                setMinX(int);
        void                setMinY(int);
        int                 getMaxX(void) const;
        int                 getMaxY(void) const;
        int                 getMinX(void) const;
        int                 getMinY(void) const;

        void                addEnemy(Position *p);
        void                addMissile(Position *p);
        void                refreshObjects(int tick);
        void                spawnEnemies(void);

    private:
        int                 _seconds;
        int                 _score;
        Player              *_player;
        t_list              *_enemies;
        t_list              *_missiles;
        // t_list              *_obstacles;
        int                 _max_y;
        int                 _min_y;
        int                 _max_x;
        int                 _min_x;

};

#endif