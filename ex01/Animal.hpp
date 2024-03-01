#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
#define PINK    "\e[38;5;212m"
#define WHITE   "\e[0;37m"
#define BLACK   "\e[0;30m"
#define RED     "\e[0;31m"
#define GREEN   "\e[0;32m"
#define YELLOW  "\e[0;33m"
#define BLUE    "\e[0;34m"
#define PURPLE  "\e[0;35m"
#define CYAN    "\e[0;36m"

class Animal
{
protected:
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