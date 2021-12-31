/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:39:35 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 17:55:30 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
protected:
public:
	Cat(void);
	Cat(const std::string type);
	Cat(const Cat &src);
	~Cat(void);
	Cat& operator=(const Cat &src);

	virtual void makeSound(void) const;
};

#endif