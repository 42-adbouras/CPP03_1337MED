/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:21:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/21 18:54:20 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("NPC"), healthPoints(10), energyPoints(10), attackDamage(0) {
	if (DEBUG)
		std::cout << "[ClapTrap Default Constructor Called]" << std::endl;
	else
		std::cout << this->name << " spawned." << std::endl;
}

ClapTrap::ClapTrap( str name ) : name(name), healthPoints(10), energyPoints(10), attackDamage(0) {
	if (DEBUG)
		std::cout << "[ClapTrap Parameterized Constructor Called]" << std::endl;
	else
		std::cout << this->name << " spawned." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& right ) {
	if (DEBUG)
		std::cout << "[ClapTrap Copy Constructor Called]" << std::endl;
	*this = right;
}

ClapTrap::~ClapTrap	( void ) {
	if (DEBUG)
		std::cout << "[ClapTrap Default Destructor Called]" << std::endl;
	else
		std::cout << this->name << " out of sight!" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& right ) {
	if (DEBUG)
		std::cout << "[ClapTrap Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name			= right.name;
		this->healthPoints	= right.healthPoints;
		this->energyPoints	= right.energyPoints;
		this->attackDamage	= right.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->energyPoints) {
		std::cout << this->name << " attacks " << target << ", causing -["
		<< this->attackDamage << "] hp!" << std::endl;
		--(this->energyPoints);
	} else
		std::cout << this->name << " run out of energy!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->healthPoints > 0) {
		std::cout << this->name << " is hit for -[" << amount << "] hp." << std::endl;
		this->healthPoints -= amount;
	} else
		std::cout << this->name << " is dead alredy!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->energyPoints) {
		std::cout << this->name << " is healing ... +[" << amount << "] hp." << std::endl;
		this->healthPoints += amount; --(this->energyPoints);
	} else
		std::cout << this->name << " run out of energy!" << std::endl;
}

void	ClapTrap::printStatus( void ) {
	std::cout << this->name 
	<< " => heathPoints: " << this->healthPoints
	<< ", energyPoints: " << this->energyPoints
	<< ", attackDamage: " << this->attackDamage
	<< std::endl;
}
