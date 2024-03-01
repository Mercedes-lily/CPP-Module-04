#include "Cat.hpp"
#include <string>
#include <iostream>

Cat::Cat(void) : AAnimal("cat")
{
	std::cout << BLUE << "A cute little baby cat is born 🐱";
	std::cout << BLUE << std::endl << WHITE;
	this->_brain = new Brain();
}

Cat::Cat(std::string name) : AAnimal("cat")
{
	std::cout << BLUE << "A cute little baby cat is born 🐱";
	std::cout << "You name it " << name << " Helo " << name << WHITE;
	std::cout << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
}

Cat& Cat::operator=(Cat const& rhs)
{
	delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	for(int i = 0; i < 100; i ++)
		this->_brain[i] = rhs._brain[i];
	return *this;
}

Cat::~Cat(void)
{
	std::cout << BLUE << "This kind and delicate cat passed away ⚰️";
	std::cout << std::endl << WHITE;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "📢 Meow MEOW 📢" << std::endl << WHITE;
}