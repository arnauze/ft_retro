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

class	Pleayer {
    public:
        Player(void);
        ~Player(void);
        Player(Player const & frame);
        Player	&operator=(Frame const & frame);
    
    	

    private:
        int	lives = 4;
        // char	*ship = 
        int	x_center = 0;
        int y_center = 0;
};

#endif
