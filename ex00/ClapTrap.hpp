/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:23:49 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/05 18:35:43 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef	std::string str;

class ClapTrap
{
private:
	str		name;
	int		healthPoints;
	int		energyPoints;
	int		attackDamage;
public:
	ClapTrap	( str name );
	ClapTrap	( const ClapTrap& right );
	~ClapTrap	( void );

	ClapTrap&	operator=( const ClapTrap& right );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
};

