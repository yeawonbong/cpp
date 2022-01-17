/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:54 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 19:54:59 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
public :

	B();
	B(const B &src);
	~B();
	
	B &operator=(const B &src);

};

std::ostream	&operator<<(std::ostream &ostream, const B &instance);

#endif