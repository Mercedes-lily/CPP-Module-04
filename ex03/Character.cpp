#include <string>
#include <iostream>
#include <Character.hpp>

Character::Character(void) : _name("")
{
	std::cout << "Defaut Character constructor" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Name Character constructor" << std::endl;
}

Character::Character(Character const& src)
{
	Character *newCharacter = new Character(src.getName());
	for (int i = 0; i <= 3, i++)
	{

	}
	*this = *newCharacter;
}

Character& Character::operator=(Character const& rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}

Character::~Character(void)
{
	std::cout << "Deconstructor Character" << std::endl;
}
	
	
	Character(void);
	Character(Character const& src);
	~Character(void);
	Character& operator=(Character const& rhs);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);