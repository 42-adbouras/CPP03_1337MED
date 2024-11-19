/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:06:48 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/19 13:38:37 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap") {
	if (DEBUG)
		std::cout << "[FragTrap Default Constructor Called]" << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
}

FragTrap::FragTrap( str name ) : ClapTrap(name) {
	if (DEBUG)
		std::cout << "[FragTrap Paramiterized Constructor Called]" << std::endl;
	std::cout << this->name <<  " is here to save the day." << std::endl;
	this->healthPoints	= 100;
	this->energyPoints	= 100;
	this->attackDamage	= 30;
}

FragTrap::FragTrap( const FragTrap& right ) {
	if (DEBUG)
		std::cout << "[FragTrap Copy Constructor Called]" << std::endl;
	*this = right;
}

FragTrap::~FragTrap	( void ) {
	if (DEBUG)
		std::cout << "[FragTrap Default Destructor Called]" << std::endl;
	std::cout << this->name << " willing to leave the party!" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& right ) {
	if (this != &right) {
		this->name = right.name;
		this->healthPoints	= right.healthPoints;
		this->energyPoints	= right.energyPoints;
		this->attackDamage	= right.attackDamage;
	}
	return (*this);
}

void		FragTrap::highFiveGuys( void ) {
	std::cout << "✨Here's a virtual high five 🖐️ just for you✨" << std::endl;
}