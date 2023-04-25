/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 07:47:20 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/25 08:04:51 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}


