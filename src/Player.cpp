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

bool		Player::isTouched(Position *data) {
	int		dataX = data->getX();
	int		dataY = data->getY();
	if (((this->getX() == dataX) || (this->getX() + 1 == dataX) || (this->getX() + 2 == dataX)) && ((this->getY() == dataY) || (this->getY() + 1 == dataY) || (this->getY() - 1 == dataY)))
		return true;
	return false;
}

// void	Player::shoot(Frame **frame) {
// 	t_list		*missiles = (*frame)->getMissiles();
// 	add_node(&missiles, new Missile(this->getX(), this->getY() - 1));
// 	return ;
// }
