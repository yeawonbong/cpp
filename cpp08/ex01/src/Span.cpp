/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:26:58 by ybong             #+#    #+#             */
/*   Updated: 2022/01/24 15:58:30 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"

bool    Span::verbose = false;

Span::Span() : size(0) {
	if (verbose)
		std::cout << "Default Constructor called" << std::endl;
}

Span::Span(unsigned int n) : size(n) {
	if (verbose)
		std::cout << "Constructor called" << std::endl;	
}

Span::Span(const Span &src) {
	if (verbose)
		std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Span::~Span() {
	if (verbose)
		std::cout << "Destructor called" << std::endl;
	numbers.clear();
	std::vector<int>().swap(numbers);
}

Span	&Span::operator=(const Span &src) {
	if (verbose)
		std::cout << "Assignment Operator called" << std::endl;
	this->numbers = src.numbers;
	return *this;
}

void	Span::addNumber(int num) { // iterator begin end 인자로 받는 함수 하나 더 만들기
	if (find(numbers.begin(), numbers.end(), num) != numbers.end())
		throw std::invalid_argument("The number already exists");
	if (size < numbers.size() + 1)
		throw std::overflow_error("Cannot store the number, The container is full");
	numbers.push_back(num);
}

int		Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("There is no span to find, element is less than two");
	std::vector<int> sorted(numbers);
	sort(sorted.begin(), sorted.end());
	int span = *(sorted.begin() + 1) - *(sorted.begin());
	for (std::vector<int>::iterator i = sorted.begin() + 1; i + 1 != sorted.end(); i++) {
		if ((*(i+1) - *(i)) < span)
			span = (*(i+1) - *(i));
	}
	sorted.clear();
	std::vector<int>().swap(sorted);
	return span;
}

int		Span::longestSpan() {
	std::vector<int> sorted(numbers);
	sort(sorted.begin(), sorted.end());
	int span = *(sorted.end() - 1) - *(sorted.begin());
	sorted.clear();
	std::vector<int>().swap(sorted);	
	return span;
}

std::vector<int>	Span::getNumbers() const{
	return numbers;
}
