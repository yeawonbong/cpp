/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:55:11 by ybong             #+#    #+#             */
/*   Updated: 2022/01/24 20:52:07 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/A.hpp"
# include "../include/B.hpp"
# include "../include/C.hpp"

Base	*generate() {
	int random = rand() % 3;
	switch (random)
	{
		case 0 : return new A();
		case 1 : return new B();
		default : return new C();
	}
	return 0;
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << BLUE << "A" << std::endl << RESET;
	if (dynamic_cast<B*>(p))
		std::cout << BLUE << "B" << std::endl << RESET;
	if (dynamic_cast<C*>(p))
		std::cout << BLUE << "C" << std::endl << RESET;
}

void	identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << BLUE << "A" << std::endl << RESET;
	}
	catch(std::exception &e) {
		(void)e;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << BLUE << "B" << std::endl << RESET;
	}
	catch(std::exception &e) {
		(void)e;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << BLUE << "C" << std::endl << RESET;
	}
	catch(std::exception &e) {
		(void)e;
	}

}

int main(void)
{
	Base::verbose = true;
	
	std::cout << GRAY << "Identify with Pointer" << std::endl << RESET;
	Base *ptr=0;
	for (int i=0; i<10; i++) {
		ptr = generate();
		identify(ptr);
		delete ptr;
		ptr=0;
	}
	std::cout << GRAY << "Identify with Reference" << std::endl << RESET;
	for (int i=0; i<10; i++) {
		Base &ref=*generate();
		identify(ref);
		delete &ref;
	}
}