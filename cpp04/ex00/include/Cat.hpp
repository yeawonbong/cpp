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