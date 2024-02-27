#ifndef AMATERIA_HPP
# define AMATERIA_HPP 
# include <string>
# include "Icharacter.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const& src);
	~AMateria(void);
	AMateria& operator=(AMateria const& rhs);
	virtual AMateria* clone() const = 0;
	std::string const & getType() const;
	virtual void use(ICharacter& target);
	void	setType(std::string type);
};

#endif;