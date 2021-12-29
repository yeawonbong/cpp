#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
protected:
public:
	Dog(void);
	Dog(const std::string type);
	Dog(const Dog &src);
	~Dog(void);
	Dog &operator=(const Dog &src);

	virtual void makeSound(void) const;
};

#endif