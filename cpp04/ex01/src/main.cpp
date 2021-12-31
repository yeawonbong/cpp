/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:24:55 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 22:51:00 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/Brain.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j; //should not create a leak
		delete i;
		system("leaks animals");
	}
	std::cout << std::endl;
	
	Animal	*animalArr[NUM];
	for(int i=0; i < NUM; i++) {
		if (i < NUM / 2)
			animalArr[i] = new Cat();
		else
			animalArr[i] = new Dog();
		std::cout << i << ". " << animalArr[i]->getType() << " (created on animalArr!)" << std::endl;
	}

	Brain *b1 = animalArr[0]->getBrain();
	Brain *b2 = animalArr[NUM-1]->getBrain();
	
	b1->ideas[0] = "My Idea FIRST";
	b2->ideas[0] = "My Idea LAST";
	std::cout << "[Before copy_AnimalFirst] : " << b1->ideas[0] << ", " << &b1->ideas[0] << std::endl;
	std::cout << "[Before copy_AnimalLast] : " << b2->ideas[0] << ", " << &b2->ideas[0] << std::endl;
	*(animalArr[0]) = *(animalArr[NUM-1]);
	std::cout << "[After copy] : " << b1->ideas[0] << ", " << &b1->ideas[0] << std::endl;
	std::cout << "[After copy] : " << b2->ideas[0] << ", " << &b2->ideas[0] << std::endl;
	for(int i=0; i < NUM; i++) {
		std::cout << "INDEX" << i << ". ";
		delete animalArr[i];
	}
	system("leaks animals");
}
