/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:40 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 19:54:42 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Base.hpp"

bool Base::verbose = true;

Base::~Base() {
	if (Base::verbose)
		std::cout << "<Base> Destructor called" << std::endl;
}