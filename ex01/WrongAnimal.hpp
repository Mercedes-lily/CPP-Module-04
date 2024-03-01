#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
private:
	std::string _type;
public:
	std::string	getType(void) const;
	void	setType(std::string type);
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	virtual~WrongAnimal(void);
	WrongAnimal& operator=(WrongAnimal const& rhs);
	void	makeSound() const;
};

#endif