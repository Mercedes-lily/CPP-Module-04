#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include "AMateria.hpp" 

class Cure : public AMateria
{
private:
public:
	Cure(void);
	Cure(Cure const& src);
	~Cure(void);
	Cure& operator=(Cure const& rhs);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif;
