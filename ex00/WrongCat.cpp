#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat(void)
{
	std::cout << "A weird and sticky Wrongcat is born 🐸";
	std::cout << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	std::cout << "A weird and sticky Wrongcat is born 🐸";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl;
}

WrongCat::WrongCat(WrongCat const& src)
{
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat became an fly hunter and quit. 🐸";
	std::cout << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "📢 ME*ow* Ri*bbi*t *mEOw 📢" << std::endl;
}