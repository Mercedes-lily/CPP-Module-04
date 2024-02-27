#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal(void) : _type("")
{
	std::cout << PINK <<"A wonderful creature is born 🌈" << WHITE << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << PINK << "A wonderful creature is born 🌈";
	std::cout << PINK << "This creature decide to evolve in a" << this->_type;
	std::cout << PINK << std::endl << WHITE ;
}

Animal::Animal(Animal const& src)
{
	*this = src;
}

Animal& Animal::operator=(Animal const& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << PINK << "💔 Unfortunately your amazing creature disappear in unknown circumstances 💔" << WHITE;
	std::cout << PINK << std::endl << WHITE;
}

std::string	Animal::getType(void) const
{
	return(this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << PINK << "Random Sound" << std::endl << WHITE;
}
