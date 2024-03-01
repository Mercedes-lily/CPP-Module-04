#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat(void) : Animal("cat")
{
	std::cout << "A cute little baby cat is born 🐱";
	std::cout << std::endl;
}

Cat::Cat(std::string name) : Animal("cat")
{
	std::cout << "A cute little baby cat is born 🐱";
	std::cout << "You name it " << name << " Helo " << name;
	std::cout << std::endl;
}

Cat::Cat(Cat const& src)
{
	*this = src;
}

Cat& Cat::operator=(Cat const& rhs)
{
	if (this != &rhs)
		this->setType(rhs.getType());
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "This kind and delicate cat passed away ⚰️";
	std::cout << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "📢 Meow MEOW 📢" << std::endl;
}