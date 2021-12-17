/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:23:11 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:23:12 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

int	main(int argc, char* argv[])
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Err: Invalid Input!" << std::endl;
		return (0);
	}
	karen.filter(argv[1]);
}