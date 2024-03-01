#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

int Character::_iGarbage = 0;
AMateria* Character::_Garbage[100];

Character::Character(void) : _name("")
{
	std::cout << PURPLE << "A new human is born" << std::endl;
	for (int i = 0; i <= 3; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << PURPLE << "A new human is born" << std::endl;
	for (int i = 0; i <= 3; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const& src)
{
	Character *newCharacter = new Character(src.getName());
	for (int i = 0; i <= 3; i++)
		newCharacter->inventory[i] = this->inventory[i];
	*this = *newCharacter;
}

Character& Character::operator=(const Character& rhs)
{
	Character *newCharacter = new Character(rhs.getName());
	if (this != &rhs)
	{
		for (int i = 0; i <= 3; i++)
			newCharacter->inventory[i] = this->inventory[i];
	}
	return *newCharacter;
}

Character::~Character(void)
{
	if (Character::_Garbage[0] != NULL)
	{
		/*for(int i = 0; i < Character::_iGarbage; i++)
		{
			delete Character::_Garbage[i];
			Character::_Garbage[i] = NULL;
		}*/
	}
	std::cout << PURPLE << "Bye bye dear human" << std::endl;
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << PURPLE << "Unable to equip this type of materia" << std::endl;
		return;
	}
	for (int i = 0; i <= 3; i++)
	{
		if (this->inventory[i] == NULL)
		{
			std::cout << PURPLE << "You add your " << m->getType();
			std::cout << PURPLE << " materia to your pocket" << std::endl;
			this->inventory[i] = m;
			return;
		}
	}
	std::cout <<RED << "You can't add " << m->getType();
	std::cout <<RED << " materia to your pocket. It's already full." << std::endl;
}

void Character::unequip(int idx)
{
	if(idx >= 4 || idx < 0)
	{
		std::cout << RED << "Wrong pocket" << std::endl;
		return;
	}
	if (this->inventory[idx] != NULL)
	{
		std::cout << PURPLE<< "You remove your " << this->inventory[idx]->getType();
		std::cout <<PURPLE << "materia form your pocket" << std::endl;
		this->inventory[idx] = NULL;
		return;
	}
	std::cout << RED << "Your pocket is already empty." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if(idx >= 4 || idx < 0)
	{
		std::cout << RED << "Wrong pocket" << std::endl;
		return;
	}
	if (this->inventory[idx] != NULL)
	{
		if (this->inventory[idx]->getType().compare("ice") == 0)
			this->inventory[idx]->use(target);
		if (this->inventory[idx]->getType().compare("cure") == 0)
			this->inventory[idx]->use(target);
		return;
	}
	std::cout << RED << "Your pocket is empty. Oh no! You won't be able make your move." << std::endl;
}

void Character::AddToGarbage(AMateria *m)
{
	Character::_Garbage[Character::_iGarbage] = m;
	Character::_iGarbage ++;
	return;
}
