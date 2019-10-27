/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:56:36 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 20:53:40 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

<<<<<<< HEAD
# include "header.hpp"
# include "Position.hpp"

class        Enemy : public Position {

    public:
        Enemy(void);
        Enemy(int x, int y);
        ~Enemy( void );
        Enemy( Enemy const & enemy );
        Enemy &operator=(Enemy const & enemy);

=======
# include <iostream>
# include <string>
struct cord{
    int x;
    int y;
};
struct size{
    int w;
    int h;
};

class Enemy
{
public:
    Enemy(int);
    Enemy(void);
    ~Enemy(void);
    Enemy( Enemy & cpy );
    Enemy &operator=(Enemy & rhs);

    void info(void); // print out info
    void move(int x, int y); // move Cordinate
    cord getCord(Enemy &target);
    size getSize(Enemy &target);

    int getX(void);
    int getY(void);
    int getW(void);
    int getH(void);
    std::string getType(void);

    void setCord(int x, int y);
    void setSize(int w, int h);
    void setName(std::string str);

private:
    std::string _type;
    std::string _name;
    int         _index;
    int _x;
    int _y;
    int _h;
    int _w;
>>>>>>> afe788baafabce06d2acd694306538d29e2347cc
};

std::vector<Enemy> Enemies; // Declare Enemies vector. vector is not size determined array.
/*
 can add enemy instance like below
 Enemy enemy;
 enemies.push_back(enemy);
*/

#endif


