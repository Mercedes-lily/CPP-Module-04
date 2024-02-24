#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog(void)
{
	std::cout << "A gentle little puppy is born 🐶";
	std::cout << std::endl;
}

Dog::Dog(std::string name)
{
	std::cout << "A gentle little puppy is born 🐶";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl;
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
	std::cout << "This incredible Dog passed away 🫥 ⚰️";
    std::cout << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "📢 Woof Woof 📢" << std::endl;
}