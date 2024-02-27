#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	Brain	*_brain;
public:
	Dog(void);
	Dog(std::string name);
	Dog(Dog const& src);
	~Dog(void);
	Dog&	operator=(Dog const& rhs);
	void	makeSound() const;
};

#endif
