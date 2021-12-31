/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 19:06:31 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 21:39:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
# include <iomanip>

class Brain 
{
private:

public:
	std::string	ideas[100];
	Brain(void);
	Brain(const Brain &src);
	~Brain(void);
	Brain& operator=(const Brain &src);
};

#endif