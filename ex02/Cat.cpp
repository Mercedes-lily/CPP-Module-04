#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat(void)
{
	std::cout << BLUE << "A cute little baby cat is born 🐱";
	std::cout << BLUE << std::endl << WHITE;
	this->_brain = new Brain();
}

Cat::Cat(std::string name)
{
	std::cout << BLUE << "A cute little baby cat is born 🐱";
	std::cout << "You name it " << name << " Helo " << name << WHITE;
	std::cout << std::endl;
	this->_brain = new Brain();
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
	std::cout << BLUE << "This kind and delicate cat passed away 🫥 ⚰️";
	std::cout << std::endl << WHITE;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "📢 Meow MEOW 📢" << std::endl << WHITE;
}