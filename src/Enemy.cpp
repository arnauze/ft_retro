# include "../header/Enemy.hpp"

Enemy::Enemy(void) : Position() {
    return ;
}

Enemy::Enemy(int x, int y) : Position(x, y) {
    return ;
}

Enemy::~Enemy( void ) {
    return ;
}

Enemy::Enemy( Enemy const & enemy) {
    *this = enemy;
    return ;
}

Enemy        &Enemy::operator=(Enemy const & enemy) {
    this->x_center = enemy.x_center;
    this->y_center = enemy.y_center;
    return *this;
}
