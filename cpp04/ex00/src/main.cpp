/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:24:55 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 17:07:05 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	system("leaks a.out");
	return 0;
	// std::cout << std::endl;
	// const WrongAnimal* WA = new WrongAnimal();
	// const WrongAnimal* Wrong = new WrongCat();
	// std::cout << Wrong->getType() << " " << std::endl;
	// WA->makeSound();
	// Wrong->makeSound();
}