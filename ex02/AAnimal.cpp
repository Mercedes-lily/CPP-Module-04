#include "AAnimal.hpp"
#include <string>
#include <iostream>

AAnimal::AAnimal(void) : _type("")
{
	std::cout << PINK <<"A wonderful creature is born 🌈" << WHITE << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << PINK << "A wonderful creature is born 🌈";
	std::cout << PINK << "This creature decide to evolve in a" << this->_type;
	std::cout << PINK << std::endl << WHITE ;
}

AAnimal::AAnimal(AAnimal const& src)
{
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << PINK << "💔 Unfortunately your amazing creature disappear in unknown circumstances 💔" << WHITE;
	std::cout << PINK << std::endl << WHITE;
}

std::string	AAnimal::getType(void) const
{
	return(this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}

