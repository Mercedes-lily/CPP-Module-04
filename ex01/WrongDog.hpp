#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"
# include <string>

class WrongDog : public WrongAnimal
{
public:
	WrongDog(void);
	WrongDog(std::string name);
	WrongDog(WrongDog const& src);
	~WrongDog(void);
	WrongDog&	operator=(WrongDog const& rhs);
	void	makeSound() const;
};

#endif