#include "../header/Obstacle.hpp"

Obstacle::Obstacle(void) : Position()
{
    return ;
}

Obstacle::Obstacle(int x, int y) : Position(x, y) {   
    return ;
}

Obstacle::Obstacle(int x, int y, int w, int h) : Position(x, y) {   
    _w = w;
    _h = h;
    return ;
}

Obstacle::~Obstacle(void)
{
    return ;
}

Obstacle&  Obstacle::operator = (Obstacle &rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    x_center = rhs.getX();
    y_center = rhs.getY();
    _w = rhs.getW();
    _h = rhs.getH();
    return (*this);
}

int Obstacle::getW() {return _w;}
int Obstacle::getH() {return _h;}
