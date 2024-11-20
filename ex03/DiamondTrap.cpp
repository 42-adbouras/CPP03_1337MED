/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:57:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/20 16:05:24 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Monster_clap_name"), name("Monster") {
	std::cout << this->name << " is forged." << std::endl;
}

DiamondTrap::DiamondTrap( str name ) : ClapTrap(name + "_clap_name"), name(name) {
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
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << this->name << "is fading!" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am " << this->name << " AKA " << ClapTrap::name << std::endl;
}