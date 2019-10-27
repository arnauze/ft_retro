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
# include "Position.hpp"
# include "Frame.hpp"
# include "Missile.hpp"

class Frame;
class	Player : public Position {
    int	lives;

    public:
        Player(void);
        Player(int x, int y);
        ~Player(void);
        Player(Player const & player);
        Player	&operator=(Player const & player);
    
    	void	drawShip(void);
    	void	getDamage(void);
        int     getLives(void) const;
        void    setLives(int lives);
        void    looseLife(void);
        bool    isTouched(Position *data);
};

#endif
