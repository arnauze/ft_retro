#ifndef FRAME_HPP
# define FRAME_HPP

# include "header.hpp"
# include "Player.hpp"
# include "Enemy.hpp"
# include "Missile.hpp"
# include "Obstacle.hpp"

class Player;
class                   Frame {
    public:
        Frame(void);
        ~Frame(void);
        Frame(Frame const & frame);
        Frame               &operator=(Frame const & frame);

        void                init(void);
        void                gameLoop(void);
        void                printLayout(void) const;
        void                printObjects(void) const;
        void                getKeyHook(char c);

        unsigned int        getSeconds(void) const;
        unsigned int        getScore(void) const;
        t_list              *getMissiles(void) const;
        t_list              *getEnemies(void) const;

        t_list              *getObstacles(void) const;

        void                setSeconds(unsigned int seconds);
        void                setScore(unsigned int score);
        void                setPlayer(Player *player);
        void                setEnemies(t_list *enemies);
        void                setMissiles(t_list *missiles);

        void                setObstacles(t_list *obstacles);

        void                setMaxX(int);
        void                setMaxY(int);
        void                setMinX(int);
        void                setMinY(int);
        void                setLives(int);
        int                 getMaxX(void) const;
        int                 getMaxY(void) const;
        int                 getMinX(void) const;
        int                 getMinY(void) const;
        int                 getLives(void) const;

        void                addEnemy(Position *p);
        void                spawnEnemies(void);

        void                addMissile(Position *p);
        void                refreshObjects(int tick);                

        void                addEmissile(Position *p);
        void                spawnEmissiles(void);

        void                addObstacle(Position *p);
        void                spawnObstacles(void);

    private:
        int                 _seconds;
        int                 _score;
        Player              *_player;
        t_list              *_enemies;
        t_list              *_emissiles;
        t_list              *_missiles;
        t_list              *_obstacles;
        int                 _lives;
        int                 _max_y;
        int                 _min_y;
        int                 _max_x;
        int                 _min_x;

};

#endif