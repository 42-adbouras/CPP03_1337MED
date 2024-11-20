/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:57:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/20 11:05:17 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : name("superHero") {
	std::cout << this->name << " is forged." << std::endl;
}

DiamondTrap::DiamondTrap( str name ) : name(name) {
	std::cout << this->name << " is forged." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& right ) {
	*this = right;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& right ) {
	if (this != &right) {
		this->name						= right.name;
		this->FragTrap::healthPoints	= right.FragTrap::healthPoints;
		this->ScavTrap::energyPoints	= right.ScavTrap::energyPoints;
		this->FragTrap::attackDamage	= right.FragTrap::attackDamage;
	}
}