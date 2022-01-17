/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:49 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 19:54:50 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
public :

	A();
	A(const A &src);
	~A();
	
	A &operator=(const A &src);

};

std::ostream	&operator<<(std::ostream &ostream, const A &instance);

#endif