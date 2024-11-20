/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:00:39 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/20 16:20:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap	( void );
	FragTrap	( str name );
	FragTrap	( const FragTrap& right );
	~FragTrap	( void );

	FragTrap&	operator=( const FragTrap& right );

	void		highFiveGuys( void );
};
