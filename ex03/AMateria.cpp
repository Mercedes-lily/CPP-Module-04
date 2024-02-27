#include "AMateria.hpp"
#include "Icharacter.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void) : _type("")
{
	std::cout << "AMateria default constructor called" <<std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria non-default constructor called" <<std::endl;
}

AMateria::AMateria(AMateria const& src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria deconstructor called" <<std::endl;
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	//TODO ?
}
