/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 07:52:52 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/25 07:59:48 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		materia[i] = copy.materia[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		materia[i] = copy.materia[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materia[i])
			delete materia[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!materia[i])
		{
			materia[i] = m;
			break;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]->clone());
	return (0);
}