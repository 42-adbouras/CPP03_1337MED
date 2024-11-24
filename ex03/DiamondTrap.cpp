/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:57:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/24 09:39:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Monster_clap_name"), name("Monster") {
	if (DEBUG)
		std::cout << "[DiamondTrap Default Constructor Called]" << std::endl;
	else
		std::cout << this->name << " is forged." << std::endl;
	this->energyPoints = 50;
}

DiamondTrap::DiamondTrap( str _name ) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name), name(_name) {
	if (DEBUG)
		std::cout << "[DiamondTrap Parameterized Constructor Called]" << std::endl;
	else
		std::cout << this->name << " is forged." << std::endl;
	this->energyPoints = 50;
}

DiamondTrap::DiamondTrap( const DiamondTrap& right ) : ClapTrap(right), ScavTrap(right), FragTrap(right) {
	if (DEBUG)
		std::cout << "[DiamondTrap Copy Constructor Called]" << std::endl;
	*this = right;
}

DiamondTrap::~DiamondTrap( void ) {
	if (DEBUG)
		std::cout << "[DiamondTrap Default Destructor Called]" << std::endl;
	else
		std::cout << this->name << "is fading!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& right ) {
	if (DEBUG)
		std::cout << "[DiamondTrap Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name			= right.name;
		this->healthPoints	= right.healthPoints;
		this->energyPoints	= right.energyPoints;
		this->attackDamage	= right.attackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack( const std::string &target ) {
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am " << this->name << " AKA " << ClapTrap::name << std::endl;
}