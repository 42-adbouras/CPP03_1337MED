/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:47 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/24 08:52:27 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/DiamondTrap.hpp"

int	main( void ) {

	DiamondTrap	foo("Godzilla");

	foo.printStatus();
	foo.guardGate();
	foo.attack("KingGong");
	foo.highFiveGuys();
	foo.printStatus();
}
