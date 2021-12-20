/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:23:42 by ybong             #+#    #+#             */
/*   Updated: 2021/12/20 17:30:49 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/replace.hpp"

int	replace(char* argv[])
{
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	char			line[BUFFER_SIZE];
	char*			ptr;
	unsigned int long	pos;

	fileIn.open(argv[1], std::ios_base::in);
	fileOut.open((((std::string)argv[1]).append(".replace")));
	if (!fileIn.is_open())
	{
		std::cout << "Invalid Filename!" << std::endl;
		fileIn.close();
		fileOut.close();
		return (1);
	}
	while (!fileIn.eof())
	{
		fileIn.getline(line, BUFFER_SIZE);
		ptr = line;
		while (*ptr)
		{
			pos = ((std::string)ptr).find(argv[2],0);
			if (pos == std::string::npos)
			{
				fileOut << ptr;
				break;
			}
			fileOut << ((std::string)ptr).substr(0, pos);
			fileOut << argv[3];
			ptr += (pos + strlen(argv[2]));
		}
		if (!fileIn.eof())
			fileOut << std::endl;
	}
	fileIn.close();
	fileOut.close();
	return (0);
}