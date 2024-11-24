/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:47 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/23 17:50:09 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/FragTrap.hpp"

int	main( void ) {

	FragTrap	foo("Din Djarin");

	foo.printStatus();
	foo.attack("Dath Vader");
	foo.takeDamage(15);
	foo.attack("Storm Trooper");
	foo.takeDamage(1);
	foo.printStatus();
	foo.beRepaired(16);
	foo.highFiveGuys();
	foo.printStatus();
}
