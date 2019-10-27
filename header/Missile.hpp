#ifndef MISSILE_HPP
# define MISSILE_HPP

# include "header.hpp"
# include "Position.hpp"

class               Missile : public Position {
    public:
        Missile(void);
        Missile(int x, int y);
        ~Missile(void);
        Missile(Missile const & missile);
        Missile         &operator=(Missile const & missile);
        
};

#endif