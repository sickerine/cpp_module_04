/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 07:49:27 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/25 08:05:27 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	type = copy.type;
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}