/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:56:36 by chjeong           #+#    #+#             */
/*   Updated: 2019/10/26 21:53:54 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "header.hpp"
# include "Position.hpp"
# include "Frame.hpp"

class Frame;

class	Enemy : public Position {    

    public:
        Enemy(void);
        Enemy(int x, int y);
        Enemy(int x, int y, int w, int h, std::string type);
        ~Enemy(void);
        Enemy(Enemy const & Enemy);
        Enemy &operator=(Enemy & rhs);

        int getW(void);
        int getH(void);
        std::string getType(void);
        void    shoot(Frame **frame);
    
    protected:
        std::string _type;
        int _h;
        int _w;
};

#endif
