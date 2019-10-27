# include "../header/Missile.hpp"

Missile::Missile(void) : Position() {
    return ;
}

Missile::Missile(int x, int y) : Position(x, y) {
    return ;
}

Missile::~Missile(void) {
    return ;
}

Missile::Missile(Missile const & missile) {
    *this = missile;
    return;
}

Missile         &Missile::operator=(Missile const & missile) {
    this->setX(missile.getX());
    this->setY(missile.getY());
    return *this;
}