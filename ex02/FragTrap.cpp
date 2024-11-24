/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:06:48 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/23 19:29:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("DinDjarin") {
	if (DEBUG)
		std::cout << "[FragTrap Default Constructor Called]" << std::endl;
	else
		std::cout << this->name <<  " is here to save the day." << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
}

FragTrap::FragTrap( str _name ) : ClapTrap(_name) {
	if (DEBUG)
		std::cout << "[FragTrap Paramiterized Constructor Called]" << std::endl;
	else
		std::cout << this->name <<  " is here to save the day." << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
}

FragTrap::FragTrap( const FragTrap& right ) : ClapTrap(right) {
	if (DEBUG)
		std::cout << "[FragTrap Copy Constructor Called]" << std::endl;
	*this = right;
}

FragTrap::~FragTrap	( void ) {
	if (DEBUG)
		std::cout << "[FragTrap Default Destructor Called]" << std::endl;
	else
		std::cout << this->name << " willing to leave the party!" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& right ) {
	if  (DEBUG)
		std::cout << "[FragTrap Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name			= right.name;
		this->healthPoints	= right.healthPoints;
		this->energyPoints	= right.energyPoints;
		this->attackDamage	= right.attackDamage;
	}
	return (*this);
}

void		FragTrap::highFiveGuys( void ) {
	std::cout << this->name <<": ✨Here's a virtual high five 🖐️ just for you✨" << std::endl;
}
