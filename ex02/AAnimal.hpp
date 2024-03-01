#ifndef AANIMAL_HPP
# define AANIMAL_HPP
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

class AAnimal
{
protected:
	std::string _type;
public:
	std::string	getType(void) const;
	void	setType(std::string type);
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const &src);
	virtual~AAnimal(void) = 0;
	AAnimal& operator=(AAnimal const& rhs);
	virtual void	makeSound() const = 0;
};

#endif