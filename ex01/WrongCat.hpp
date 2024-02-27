#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(std::string name);
	WrongCat(WrongCat const& src);
	~WrongCat(void);
	WrongCat&	operator=(WrongCat const& rhs);
	void	makeSound() const;
};

#endif