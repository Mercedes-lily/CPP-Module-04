#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << YELLOW << "A new energy flow is found" << std::endl;
	for (int i = 0; i <= 3; i++)
		this->_bluePrint[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	for (int i = 0; i <= 3; i++)
		this->_bluePrint[i] = src._bluePrint[i];
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i <= 3; i++)
			this->_bluePrint[i] = rhs._bluePrint[i];
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << YELLOW << "The energy disappear" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i <= 3; i++)
	{
		if (this->_bluePrint[i] == NULL)
		{
			this->_bluePrint[i] = m;
			std::cout << YELLOW << "You learn a new Materia BluePrint" << std::endl;
			return;
		}
	}
	std::cout << RED << "You already have 4 Materia BluePrint" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i <= 3; i++)
	{
		if(this->_bluePrint[i])
		{
			if (this->_bluePrint[i]->getType() == type)
			{
				if (type == "ice")
				{
					AMateria *newMateria = new Ice();
					return (newMateria);
				}
				else if(type == "cure")
				{
					AMateria *newMateria = new Cure();
					return (newMateria);
				}
			}
		}
	}
	std::cout << RED << "Type not found in the blueprint list" << std::endl;
	return(NULL);
}