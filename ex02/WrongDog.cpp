#include "WrongDog.hpp"
#include <string>
#include <iostream>

WrongDog::WrongDog(void)
{
	std::cout << "A really big wrong puppy is born 🐻";
	std::cout << std::endl;
}

WrongDog::WrongDog(std::string name)
{
	std::cout << "A rally big wrong puppy is born 🐻";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl;
}

WrongDog::WrongDog(WrongDog const& src)
{
	*this = src;
}

WrongDog& WrongDog::operator=(WrongDog const& rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return *this;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog became an honey explorer and quit. 🐻";
    std::cout << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "📢 Wo**Of w*OOo*of 📢" << std::endl;
}