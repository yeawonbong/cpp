/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:36 by ybong             #+#    #+#             */
/*   Updated: 2022/01/24 15:38:49 by ybong            ###   ########.fr       */
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

#endif