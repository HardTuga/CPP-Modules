/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:01:01 by pcampos-          #+#    #+#             */
/*   Updated: 2023/03/07 12:11:02 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Alberto");
	ScavTrap b("Aderito");

	a.attack("alguem");
	b.attack("alguem");

	a.takeDamage(10);
	b.takeDamage(10);

	b.guardGate();

	return (0);
}