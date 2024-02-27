#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog(void)
{
	std::cout << YELLOW << "A gentle little puppy is born 🐶";
	std::cout << std::endl << WHITE;
	this->_brain = new Brain();
}

Dog::Dog(std::string name)
{
	std::cout << YELLOW << "A gentle little puppy is born 🐶";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl << WHITE;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& src)
{
	*this = src;
}

Dog& Dog::operator=(Dog const& rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
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