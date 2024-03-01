#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animal_array[8];
	Animal *dog = new Dog();
	Animal *dog2 = new Dog();
	for(int i = 0; i <= 7; i++)
	{
		if(i % 2 == 0)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	for(int i = 0; i <= 7; i++)
		delete animal_array[i];
	delete dog;
	delete dog2;
	return 0;
}