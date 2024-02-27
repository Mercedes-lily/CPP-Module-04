#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("")
{
	std::cout << "A crazy creature is born 🐲" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "A crazy creature is born 🐲";
	std::cout << "This crazy creature become a" << this->_type;
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Your crazy creature disappear in the wild 🐲";
	std::cout << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return(this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "RaNdOm SoUnD" << std::endl;
}
