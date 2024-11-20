/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:47:46 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/20 11:01:33 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	str				name;
public:
	DiamondTrap		( void );
	DiamondTrap		( str name );
	DiamondTrap		( const DiamondTrap& right );
	~DiamondTrap	( void );

	DiamondTrap&	operator=( const DiamondTrap& right );

	void			whoAmI( void );
};
