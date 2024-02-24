#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal(void) : _type("")
{
	std::cout << "A wonderful creature is born 🌈" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "A wonderful creature is born 🌈";
	std::cout << "This creature decide to evolve in a" << this->_type;
	std::cout << std::endl;
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
	std::cout << "💔 Unfortunately your amazing creature disappear in unknown circumstances 💔";
	std::cout << std::endl;
}

std::string	Animal::getType(void)
{
	return(this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
