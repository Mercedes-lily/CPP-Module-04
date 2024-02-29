#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include "AMateria.hpp" 

class Ice : public AMateria
{
private:
public:
	Ice(void);
	Ice(Ice const& src);
	~Ice(void);
	Ice& operator=(Ice const& rhs);
	AMateria* clone() const;
};

#endif