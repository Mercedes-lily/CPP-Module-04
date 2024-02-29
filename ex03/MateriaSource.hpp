#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _bluePrint[4];
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const& src);
	~MateriaSource(void);
	MateriaSource& operator=(MateriaSource const& rhs);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

# endif
