#include <iostream>
#include <string>
#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Ice default constructor called" <<std::endl;
}

Ice::Ice(Ice const& src)
{
	*this = src;
}

Ice& Ice::operator=(Ice const& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Deconstructor called" <<std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *newMateria = new Ice();
	newMateria->setType(this->_type);
	return (newMateria);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}