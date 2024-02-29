#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>


AMateria::AMateria(void) : _type("")
{
	std::cout << WHITE << "Materia crafted" <<std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << WHITE << "Materia crafted" <<std::endl;
}

AMateria::AMateria(AMateria const& src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << WHITE << "Materia destruct" <<std::endl;
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
	if (this->_type.compare("ice") == 0)
		std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->_type.compare("cure") == 0)
		std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
