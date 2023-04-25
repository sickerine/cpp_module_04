/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharrad <mcharrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:21:58 by mcharrad          #+#    #+#             */
/*   Updated: 2023/04/24 10:34:28 by mcharrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main()
{
	{
		const Animal* animals[10];
		for (int i = 0; i < 5; i++)
			animals[i] = new Dog();
		for (int i = 5; i < 10; i++)
			animals[i] = new Cat();
		(void)animals;
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	return 0;
}