#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <string>
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());  //Yes
	src->learnMateria(new Cure());  //Yes
	src->learnMateria(new Ice());  //Yes
	src->learnMateria(new Cure());  //Yes
	src->learnMateria(new Ice());  //No

	std::cout << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");  //Yes
	me->equip(tmp);  //Yes

	std::cout << std::endl;
	tmp = src->createMateria("banane");  //No
	me->equip(tmp);  //No

		std::cout << std::endl;
	tmp = src->createMateria("cure");  //Yes
	me->equip(tmp);  //Yes
	tmp = src->createMateria("ice");  //Yes
	me->equip(tmp);  //Yes
	tmp = src->createMateria("cure");  //Yes
	me->equip(tmp);  //Yes
	tmp = src->createMateria("ice");  //No
	me->equip(tmp);  //No

	std::cout << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	me->use(0, *bob);  //Yes
	me->use(1, *bob);  //Yes
	me->unequip(2);
	me->use(4, *me); //No
	std::cout << std::endl;
	for(int i = 0; i < 10; i++)
	{
		tmp = src->createMateria("cure");
	}

	delete bob;
	delete me;
	delete src;
	return 0;
}