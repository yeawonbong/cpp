/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:36 by ybong             #+#    #+#             */
/*   Updated: 2022/01/22 16:14:16 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <stdexcept>
# include <vector>

class   Span
{

private:

	Span();
	std::vector<int>	numbers;
	unsigned int    	size;

public:

	Span(unsigned int n);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	void    addNumber(int num);
	int     shortestSpan();
	int     longestSpan();

	std::vector<int>	getNumbers() const;
	unsigned int		getSize();

	static bool verbose;

};

// template <typename T>
// typename T::iterator    easyfind(T &container, int value)
// {
//     typename T::iterator    res = find(container.begin(), container.end(), value);
//     if (res == container.end()) {
//         throw std::out_of_range("The value is not found in the container");
//     }
//     return res;
// }

#endif