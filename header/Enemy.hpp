/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:56:36 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 19:56:39 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
public:
    Enemy(int);    
    Enemy(void);
    ~Enemy(void);
    Enemy( Enemy const & enemy );
    Enemy &operator=(Enemy const & enemy);    
    void setName(std::string str);
    void announce(void);
    void move(int x, int y);
    int x;
    int y;       

private:
    std::string _type;
    std::string _name;
    int         _index;    
};

#endif
