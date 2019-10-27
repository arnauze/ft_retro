/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:55:49 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 21:52:11 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Enemy.hpp"

Enemy::Enemy(void) : Position()
{

    return ;
}

Enemy::Enemy(int x, int y) : Position(x, y) {	
    return ;
}

Enemy::Enemy(int x, int y, int w, int h, std::string type) : Position(x, y) {	

	_w = w;
	_h = h;
	_type = type;
    return ;
}

Enemy::~Enemy(void)
{
    return ;
}

Enemy&	Enemy::operator = (Enemy &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	x_center = rhs.getX();
    y_center = rhs.getY();
    _w = rhs.getW();
    _h = rhs.getH();
    _type = rhs.getType();
	return (*this);
}

int Enemy::getW() {return _w;}
int Enemy::getH() {return _h;}
std::string Enemy::getType() {return _type;}

void        Enemy::shoot(Frame **frame) {
    (void)frame;
	return;
}