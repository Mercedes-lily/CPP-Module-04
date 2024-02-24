#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
private:
	std::string _type;
public:
	std::string	getType(void) const;
	void	setType(std::string type);
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &src);
	virtual~Animal(void);
	Animal& operator=(Animal const& rhs);
	virtual void	makeSound() const;
};

#endif