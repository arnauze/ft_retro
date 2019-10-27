<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:55:49 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 19:55:53 by chjeong          ###   ########.fr       */
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
    std::mt19937 rng;
    rng.seed(std::random_device()());    
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 100);             
    x = dist(rng);
    y = 1;
    return ;
}

void Enemy::move(int h, int v)
{
    x += v;
    y += h;
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
Enemy::announce(void)
{   
    std::cout << "x: " << x << ", y: " << y << std::endl; 
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
