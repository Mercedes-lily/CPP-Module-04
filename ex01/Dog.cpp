#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog(void) : Animal("dog")
{
	std::cout << YELLOW << "A gentle little puppy is born 🐶";
	std::cout << std::endl << WHITE;
	this->_brain = new Brain();
}

Dog::Dog(std::string name) : Animal("dog")
{
	std::cout << YELLOW << "A gentle little puppy is born 🐶";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl << WHITE;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
} 

Dog& Dog::operator=(Dog const& rhs)
{
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	for(int i = 0; i < 100; i ++)
		this->_brain[i] = rhs._brain[i];
	return *this;
}

Dog::~Dog(void)
{
	std::cout << YELLOW << "This incredible Dog passed away ⚰️" << WHITE;
	std::cout << std::endl;
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "📢 Woof Woof 📢" << std::endl << WHITE;
}