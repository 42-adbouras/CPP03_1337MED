/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:00:58 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/20 16:23:09 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap	( void );
	ScavTrap	( str name );
	ScavTrap	( const ScavTrap& right );
	~ScavTrap	( void );

	ScavTrap&	operator=( const ScavTrap& right );

	void		attack( const std::string& target );
	void		guardGate( void );
};
