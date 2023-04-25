/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 07:42:53 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/25 07:59:43 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	name = "NPC";
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(const std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

Character::Character(const Character & copy)
{
	name = copy.name;
	for (int i = 0; i < 4; i++)
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = 0;
}

Character &Character::operator=(const Character & copy)
{
	if (this == &copy)
		return (*this);
	name = copy.name;
	for (int i = 0; i < 4; i++)
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = 0;
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;
		}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (inventory[idx])
		inventory[idx]->use(target);
}


