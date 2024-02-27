#include <iostream>
#include <string>
#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Cure default constructor called" <<std::endl;
}

Cure::Cure(Cure const& src)
{
	*this = src;
}

Cure& Cure::operator=(Cure const& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << "Deconstructor called" <<std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *newMateria = new Cure();
	newMateria->setType(this->_type);
	return (newMateria);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}