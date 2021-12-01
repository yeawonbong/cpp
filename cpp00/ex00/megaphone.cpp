/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:53 by ybong             #+#    #+#             */
/*   Updated: 2021/12/01 17:09:54 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	char	*ptr;
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (argv[i])
	{
		ptr = argv[i];
		while (*ptr)
		{
			if (islower(*ptr))
				std::cout << (char)(*ptr - 32);
			else
				std::cout << *ptr;
			ptr++;
		}
		i++;
	}
	return (0);
}