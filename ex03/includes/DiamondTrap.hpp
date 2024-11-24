/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:47:46 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/23 19:10:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	str				name;
public:
	DiamondTrap		( void );
	DiamondTrap		( str name );
	DiamondTrap		( const DiamondTrap& right );
	~DiamondTrap	( void );

	DiamondTrap&	operator=( const DiamondTrap& right );

	void			attack( const std::string &target );
	void			whoAmI( void );
};
