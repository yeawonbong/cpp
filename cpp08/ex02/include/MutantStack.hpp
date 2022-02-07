/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:36 by ybong             #+#    #+#             */
/*   Updated: 2022/01/22 20:30:42 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stdexcept>
# include <stack>


template <typename T>
class   MutantStack : public std::stack<T>
{

public:

	MutantStack();
	MutantStack(const MutantStack &src);
	~MutantStack();
	MutantStack &operator=(const MutantStack &src);


	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() {
		return this->c.begin();
	}
	iterator	end() {
		return this->c.end();
	}

	static bool verbose;

};

#endif
