#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "This is a brain with 100 stupids ideas" << std::endl;
}

Brain::Brain(Brain const& src)
{
	*this = src;
}

Brain& Brain::operator=(Brain const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i <= 99; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain go to sleep" << std::endl;
}