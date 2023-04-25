/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 07:50:47 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/25 08:05:33 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	type = copy.type;
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}