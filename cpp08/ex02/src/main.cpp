/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:34 by ybong             #+#    #+#             */
/*   Updated: 2022/02/07 16:40:57 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MutantStackDefine.hpp"
# include <vector>
# include <list>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RED "\033[1;31m"
# define RESET "\033[1;0m"

int main()
{
	{
		std::cout << BLUE << "<Stack_TEST>" << std::endl << RESET; 
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << GRAY << "print stack" << std::endl << RESET; 
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::cout << GRAY << "copy constructor test" << std::endl << RESET; 
		MutantStack<int> s(mstack);
		mstack.push(9999);
		it = mstack.begin();
		ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		MutantStack<int>::iterator sit = s.begin();
		MutantStack<int>::iterator site = s.end();
		while (sit != site)
		{
			std::cout << *sit << " ";
			++sit;
		}
		std::cout << std::endl;
	}
	{
		std::cout << BLUE << "<Stack_LIST>" << std::endl << RESET; 
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << mlist.front() << std::endl;
		mlist.pop_back();
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << GRAY << "print list" << std::endl << RESET; 
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}