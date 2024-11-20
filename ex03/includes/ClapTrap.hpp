/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:23:49 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/19 10:01:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define DEBUG	0

typedef	std::string str;

class ClapTrap
{
protected:
	str		name;
	int		healthPoints;
	int		energyPoints;
	int		attackDamage;
public:
	ClapTrap	( void );
	ClapTrap	( str name );
	ClapTrap	( const ClapTrap& right );
	~ClapTrap	( void );

	ClapTrap&	operator=( const ClapTrap& right );

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
};

