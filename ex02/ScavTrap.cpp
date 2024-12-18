/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:00:52 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/21 12:47:32 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("IG-88") {
	if (DEBUG)
		std::cout << "[ScavTrap Default Constructor Called]" << std::endl;
	else
		std::cout << this->name <<  " Robot is assembled." << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 50;
	this->attackDamage	= 20;
}

ScavTrap::ScavTrap( str _name ) : ClapTrap(_name) {
	if (DEBUG)
		std::cout << "[ScavTrap Paramiterized Constructor Called]" << std::endl;
	else
		std::cout << this->name <<  " Robot is assembled." << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 50;
	this->attackDamage	= 20;
}

ScavTrap::ScavTrap( const ScavTrap& right ) : ClapTrap(right) {
	if (DEBUG)
		std::cout << "[ScavTrap Copy Constructor Called]" << std::endl;
	*this = right;
}

ScavTrap::~ScavTrap( void ) {
	if (DEBUG)
		std::cout << "[ScavTrap Default Destructor Called]" << std::endl;
	else
		std::cout << this->name << " went lost!" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& right ) {
	if (DEBUG)
		std::cout << "[ScavTrap Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name			= right.name;
		this->healthPoints	= right.healthPoints;
		this->energyPoints	= right.energyPoints;
		this->attackDamage	= right.attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack( const std::string& target ) {
	if (this->energyPoints) {
		std::cout << this->name << " lazered " << target << ", causing -["
		<< this->attackDamage << "] hp!" << std::endl;
		--(this->energyPoints);
	} else
		std::cout << this->name << " run out of energy!" << std::endl;
}

void		ScavTrap::guardGate( void ) {
	std::cout << this->name << " is now in Gatekeeper Mode." << std::endl;
}