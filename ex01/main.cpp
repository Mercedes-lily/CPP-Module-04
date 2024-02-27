#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
Animal *animal_array[8];
	for(int i = 0; i <= 7; i++)
	{
		if(i % 2 == 0)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	for(int i = 0; i <= 7; i++)
		delete animal_array[i];
	return 0;
}