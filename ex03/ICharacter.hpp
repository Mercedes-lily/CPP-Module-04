#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <string>
# include "AMateria.hpp" 


/********************************************
 * NOTE *
 * pure virtuelle : une classe virtual ... = 0 ne peut pas avoir de definition dans sa classe d'origine
 * quand il y a un ... = 0 la classe devien abstraite
 * on peut definir la fonctio dans un classe fille (meme on doit). La classe abstraite defini ce que devra faire la classe fille
 * Classe abstraite ne peut pas etre instancier
 * Une claas abstraite donne une base obligatoire a la classe fille
 * Mettre tout les comportement abstrait = une interface
 * interface = aucun attribut ex: std::String _name
 * interface c'est comme un blue print d'une classe
 * Tout classe qui heritera dune interface devra fonctionner comme l'interface functionne 
*********************************************/
class ICharacter
{
private:
public:
	//ICharacter(void);
	//ICharacter(ICharacter const& src);
	//ICharacter& operator=(ICharacter const& rhs);
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif