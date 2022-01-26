/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongwkim <yongwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:55:54 by yongwkim          #+#    #+#             */
/*   Updated: 2022/01/26 15:03:51 by yongwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* ani[10];

	std::cout << "-------Animal array------- " << std::endl;
	for (int k = 0; k < 10; k++)
	{
		if (k < 5)
			ani[k] = new Dog();
		else
			ani[k] = new Cat();
	}
	for (int k = 0; k < 10; k++)
	{
		std::cout << k << std::endl;
		delete ani[k];
	}
	std::cout << "-----------------" << std::endl;
	
	delete j;//should not create a leak
	delete i;
	system("leaks tests");

	std::cout << "--------deep copy test---------" << std::endl;
	const Cat cat = Cat();
	std::cout << "cat's ";
	cat.print_brain_addr();
	const Cat copycat = cat;
	std::cout << "copycat's ";
	copycat.print_brain_addr();

	const Dog dog = Dog();
	std::cout << "dog's ";
	dog.print_brain_addr();
	const Dog copydog = dog;
	std::cout << "copydog's ";
	copydog.print_brain_addr();

	//const Animal animal;
}