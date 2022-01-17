/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:55:08 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 19:55:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
public :

	C();
	C(const C &src);
	~C();
	
	C &operator=(const C &src);

};

std::ostream	&operator<<(std::ostream &ostream, const C &instance);

#endif