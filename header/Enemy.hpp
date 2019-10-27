#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "header.hpp"
# include "Position.hpp"

class        Enemy : public Position {

    public:
        Enemy(void);
        Enemy(int x, int y);
        ~Enemy( void );
        Enemy( Enemy const & enemy );
        Enemy &operator=(Enemy const & enemy);

};

#endif