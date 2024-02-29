#include <iostream>
#include <string>
#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	Character::AddToGarbage(this);
	std::cout << BLUE << "Materia gain ice power" <<std::endl;
}

Ice::Ice(Ice const& src)
{
	Character::AddToGarbage(this);
	*this = src;
}

Ice& Ice::operator=(Ice const& rhs)
{
	Character::AddToGarbage(this);
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << BLUE << "All ice power dissapear from the materia" <<std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *newMateria = new Ice();
	Character::AddToGarbage(newMateria);
	newMateria->setType(this->_type);
	return (newMateria);
}
