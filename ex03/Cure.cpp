#include <iostream>
#include <string>
#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	Character::AddToGarbage(this);
	std::cout << GREEN << "Materia gain cure power" <<std::endl;
}

Cure::Cure(Cure const& src)
{
	Character::AddToGarbage(this);
	*this = src;
}

Cure& Cure::operator=(Cure const& rhs)
{
	Character::AddToGarbage(this);
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << GREEN << "All cure power dissapear from the materia" <<std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *newMateria = new Cure();
	Character::AddToGarbage(newMateria);
	newMateria->setType(this->_type);
	return (newMateria);
}
