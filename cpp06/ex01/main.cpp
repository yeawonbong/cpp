/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:58:05 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 18:58:06 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data 
{
	std::string str;
};

uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) 
{
	Data *initData = new Data;
	Data *currentData;
	uintptr_t raw;

	initData->str = "Hello, world!";
	raw = serialize(initData);
	currentData = deserialize(raw);
	std::cout << currentData->str << std::endl;
}