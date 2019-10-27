# include "../header/Position.hpp"

Position::Position(void) {
    return ;
}

Position::Position(int x, int y) : x_center(x), y_center(y) {
    return ;
}

Position::~Position( void ) {
    return ;
}

Position::Position( Position const & position) {
    *this = position;
    return ;
}

Position        &Position::operator=(Position const & position) {
    this->x_center = position.getX();
    this->y_center = position.getY();
    return *this;
}

int		Position::getX(void) const {
	return this->x_center;
}

int		Position::getY(void) const {
	return this->y_center;
}

void	Position::setX(int x) {
	this->x_center = x;
	return ;
}

void	Position::setY(int y) {
	this->y_center = y;
	return ;
}

void	Position::moveUp(void) 
{
	this->y_center -= 1;
	return;
}

void	Position::moveDown(void) 
{
	this->y_center += 1;
	return;
}

void	Position::moveRight(void) 
{
	this->x_center += 2;
	return;
}

void	Position::moveLeft(void) 
{
	this->x_center -= 2;
	return;
}

Position    *Position::clone(void) {
    return new Position(this->getX(), this->getY());
}