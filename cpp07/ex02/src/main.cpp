/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:45 by ybong             #+#    #+#             */
/*   Updated: 2022/02/06 17:00:48 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ArrayDefine.hpp"

#define MAX_VAL 750
#define STRING_MAX_VAL 10

int main()
{
	/* INT ARR TEST*/
	std::cout << BLUE << "<<<INT Array Test>>>" << std::endl << RESET;
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		std::cout << BLUE << "TEST1" << std::endl << RESET; /* 제대로 복사 되었는 지 */
		{
			Array<int> tmp = numbers;	// == Array<int> temp(numbers);
			Array<int> test(tmp);		//복사생성자
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << BLUE << "TEST2" << std::endl << RESET; /* 범위 밖 인덱스 접근 예외처리 */
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << BLUE << "TEST3" << std::endl << RESET; /* 범위 밖 인덱스 접근 예외처리 */
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << BLUE << "TEST4" << std::endl << RESET; /* size() 함수 테스트 */
		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
			// std::cout << numbers[i] << " ";
		}
		// std::cout << std::endl;
		std::cout << "size() :  " << numbers.size() << std::endl;
		delete [] mirror;
	}

	/* STRING ARR TEST*/
    std::cout << BLUE << "<<<STRING Array Test>>>" << std::endl << RESET;
	{
		Array<std::string> strings(STRING_MAX_VAL);
		std::string	stringSrc[10] = {
			"Apple", "Bool", "Char", "Dash", "Ear", "Fire", "Google", "Home", "Integer", "Java"
		};
		for (int i = 0; i < STRING_MAX_VAL; i++)
		{
			strings[i] = stringSrc[i];
		}
		std::cout << BLUE << "TEST1" << std::endl << RESET; /* 제대로 복사 되었는 지 */
		{
			Array<std::string> tmp = strings;
			Array<std::string> test(tmp);
		}
		for (int i = 0; i < STRING_MAX_VAL; i++)
		{
			if (stringSrc[i] != strings[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << BLUE << "TEST2" << std::endl << RESET; /* 범위 밖 인덱스 접근 예외처리 */
		try
		{
			strings[-2] = "";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << BLUE << "TEST3" << std::endl << RESET; /* 범위 밖 인덱스 접근 예외처리 */
		try
		{
			strings[STRING_MAX_VAL] = "";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << BLUE << "TEST4" << std::endl << RESET; /* size() 함수 테스트 */
		for (int i = 0; i < STRING_MAX_VAL; i++)
		{
			std::cout << strings[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "size() :  " << strings.size() << std::endl;
	}	
	return 0;
}