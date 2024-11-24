/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:49:47 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/21 18:49:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	clap_1("Adam");
	ClapTrap	clap_2;

	clap_1.printStatus();
	clap_1.attack("evaluator");
	clap_1.takeDamage(3);
	clap_1.beRepaired(13);
	clap_1.printStatus();

	clap_2.printStatus();
	clap_2 = clap_1;
	clap_2.printStatus();
}
