#ifndef CHARACTER_HPP
# define CHARACTER_HPP 
# include <string>
# include "ICharacter.hpp"



class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria* inventory[4]; //max 4 materias
	static AMateria* _Garbage[100];
	static int _iGarbage;
public:
	Character(void);
	Character(std::string name);
	Character(Character const& src);
	~Character(void);
	Character& operator=(const Character& rhs);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	static void AddToGarbage(AMateria *m);
};

#endif