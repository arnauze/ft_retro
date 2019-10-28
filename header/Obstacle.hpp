#ifndef OBSTACLE_HPP
# define OBSTACLE_HPP

# include "header.hpp"
# include "Position.hpp"
# include "Frame.hpp"

class Frame;

class	Obstacle : public Position {    

    public:
        Obstacle(void);
        Obstacle(int x, int y);
        Obstacle(int x, int y, int w, int h);
        ~Obstacle(void);
        Obstacle(Obstacle const & Obstacle);
        Obstacle &operator=(Obstacle & rhs);

        int getW(void);
        int getH(void);
        // std::string getType(void);
        // void    shoot(Frame **frame);
    
    protected:
        // std::string _type;
        int _h;
        int _w;
};

#endif