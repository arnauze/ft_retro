<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:55:49 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 20:52:44 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <random>

Enemy::Enemy(int i): _index(i)
{
    return ;
}

Enemy::Enemy(void)
{
    // Randomize between 0 ~ 100
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 100);
    _x = dist(rng);
    _y = 1;
    return ;
}

Enemy::Enemy(Enemy &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Enemy&	Enemy::operator = (Enemy &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	_x = rhs.getX();
    _y = rhs.getY();
    _w = rhs.getW();
    _h = rhs.getH();
    _type = rhs.getType();
	return (*this);
}


void Enemy::move(int h, int v)
{
    _x += v;
    _y += h;
}

cord Enemy::getCord(Enemy &target)
{
    cord tmp;
    tmp.x = target._x;
    tmp.y = target._y;
    return tmp;
}

size Enemy::getSize(Enemy &target)
{
    size tmp;
    tmp.w = target._w;
    tmp.h = target._h;
    return tmp;
}

int Enemy::getX() {return _x;}
int Enemy::getY() {return _y;}
int Enemy::getW() {return _w;}
int Enemy::getH() {return _h;}
std::string Enemy::getType() {return _type;}


void Enemy::setCord(int x, int y)
{
    _x = x;
    _y = y;
}

void Enemy::setSize(int w, int h)
{
    _w = w;
    _h = h;
}



Enemy::~Enemy(void)
{
    return ;
}

void
Enemy::setName(std::string str)
{
    this->_name = str;
    return ;
}

void
Enemy::info(void)
{
    std::cout << "x: " << _x << ", y: " << _y <<
        ", w: " << _w << ", h: " << ", type: " << _type << std::endl;
    return;
}

=======
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
>>>>>>> amagnan
