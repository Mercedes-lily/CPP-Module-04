#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string name);
	Dog(Dog const& src);
	~Dog(void);
	Dog&	operator=(Dog const& rhs);
	void	makeSound() const;
};

#endif
