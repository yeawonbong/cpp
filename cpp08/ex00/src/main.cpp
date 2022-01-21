/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:34 by ybong             #+#    #+#             */
/*   Updated: 2022/01/21 21:04:33 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/EasyFind.hpp"
# include <vector>

# define RED "\033[1;31m"
# define RESET "\033[1;0m"

int main(void)
{
	std::vector<int>    vct;

	for (int i=1; i <= 9; i++) {
		vct.push_back(i);
	}
	try {
		std::cout << "EasyFind : " << *(easyfind(vct, 6)) << std::endl;
		std::cout << "EasyFind : " << *(easyfind(vct, 100)) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
}

//vector delete