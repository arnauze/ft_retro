/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlazuka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:41:02 by vlazuka           #+#    #+#             */
/*   Updated: 2019/10/26 14:41:03 by vlazuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/Player.hpp"
# include "../header/Missile.hpp"
# include "../header/Frame.hpp"

Player::Player(void) : Position()
{
    return ;
}

Player::Player(int x, int y) : Position(x, y) {
	this->type = "Player";
	this->lives = 5;
    return ;
}

Player::~Player(void)
{
    return ;
}

void	Player::drawShip(void)
{  
	mvaddch(Position::getY() - 1, Position::getX() + 2, '\\');
	mvaddstr(Position::getY(), Position::getX(), "#|==>");
	mvaddch(Position::getY() + 1, Position::getX() + 2, '/');
	return;
}

void	Player::getDamage(void) 
{
	return;
}

int		Player::getLives(void) const {
	return this->lives;
}

void	Player::setLives(int lives) {
	this->lives = lives;
	return ;
}

void	Player::looseLife(void) {
	this->lives -= 1;
	return ;
}

Player::Player(int x, int y, int w, int h) : Position(x, y) {   
    _w = w;
    _h = h;
    return ;
}

bool		Player::isTouched(Position * data) {
	int		dataX = data->getX();
	int		dataY = data->getY();
	if (data->getType() == "Enemy") {
		if ((this->getX() >= dataX - 2) && (this->getX() <= dataX + 2)
				&& (this->getY() >= dataY - 2) 
				&& (this->getY() <= dataY + 2)
			// (
			// 	((this->getX() == dataX) || (this->getX() + 1 == dataX) || (this->getX() + 2 == dataX))
			// 	||
			// 	((this->getX() == dataX + 1) || (this->getX() + 1 == dataX + 1) || (this->getX() + 2 == dataX + 1))
			// 	||
			// 	((this->getX() == dataX + 2) || (this->getX() + 1 == dataX + 2) || (this->getX() + 2 == dataX + 2))
			// )
			// &&
			// (
			// 	((this->getY() == dataY) || (this->getY() + 1 == dataY) || (this->getY() + 2 == dataY))
			// 	||
			// 	((this->getY() == dataY + 1) || (this->getY() + 1 == dataY + 1) || (this->getY() + 2 == dataY + 1))
			// 	||
			// 	((this->getY() == dataY + 2) || (this->getY() + 1 == dataY + 2) || (this->getY() + 2 == dataY + 2))
			// )
		)
			return true;
		else
			return false;
	} else {
		if (((this->getX() == dataX) || (this->getX() + 1 == dataX) || (this->getX() + 2 == dataX)) && ((this->getY() == dataY) || (this->getY() + 1 == dataY) || (this->getY() - 1 == dataY)))
			return true;
		return false;
	}
}

bool		Player::isTouchedObstacle(Position * data) {
	int		dataX = data->getX();
	int		dataY = data->getY();
	if ((this->getX() >= dataX - 2) && (this->getX() <= dataX + 2)
				&& (this->getY() >= dataY - 2) 
				&& (this->getY() <= dataY + 2))
		return true;
	else
		return false;
}

int Player::getW() {return _w;}
int Player::getH() {return _h;}
