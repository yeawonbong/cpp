/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:39:35 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 18:22:39 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain	*brain;
public:
	Cat(void);
	Cat(const Cat &src);
	~Cat(void);
	
	virtual Cat& operator=(const Cat &src);
	virtual Animal &operator=(const Animal &other);
	
	void makeSound(void) const;
	Brain	*getBrain(void) const;
};

#endif