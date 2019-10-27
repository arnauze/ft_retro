/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlazuka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:41:16 by vlazuka           #+#    #+#             */
/*   Updated: 2019/10/26 14:41:17 by vlazuka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

# include "header.hpp"

class	Player {
    int	lives = 5;
    int	x_center = 0;
    int y_center = 0;

    public:
        Player(void);
        ~Player(void);
        Player(Player const & frame);
        Player	&operator=(Frame const & frame);
    
    	void	drawShip(void);
    	void	moveUp(void);
    	void	moveDown(void);
    	void	moveRight(void);
    	void	moveLeft(void);
    	void	getDamage(void);
};

#endif
