/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:47 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/22 18:55:45 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ScavTrap.hpp"

int	main( void ) {

	ScavTrap	foo("R2-D2");

	foo.takeDamage(20);
	foo.attack("Storm Trooper");
	foo.beRepaired(10);
	foo.printStatus();
}
