#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	//AAnimal *animal = new AAnimal();
	Dog *dog = new Dog();
	AAnimal *dog2 = new Dog();
	Cat *cat = new Cat();
	AAnimal *cat2 = new Cat();

	delete dog;
	delete dog2;
	delete cat;
	delete cat2;

	return 0;
}