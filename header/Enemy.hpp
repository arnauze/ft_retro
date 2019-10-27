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

# include "header.hpp"
# include "Position.hpp"

class        Enemy : public Position {

    public:
        Enemy(void);
        Enemy(int x, int y);
        ~Enemy( void );
        Enemy( Enemy const & enemy );
        Enemy &operator=(Enemy const & enemy);

};

#endif
