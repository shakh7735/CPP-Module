#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int i;
    int count = 4;
    const Animal *a[count];
    
    for(i = 0; i < count ; i++)
    {
        if (i < count / 2 )
            a[i] = new Dog();
        else
            a[i] = new Cat();
        std::cout << "--- " << a[i]->getBrain()->ideas[i] <<  " ---" << std::endl;
    }
    std::cout << std::endl << "--- Delete class ---" << std::endl;
    for(i = 0; i < count ; i++)
        delete a[i];
    
    Dog *dog = new Dog();
    std::cout << dog->getBrain()->ideas[0] << std::endl;
    dog->getBrain()->ideas[0] = "-- I am Dog--";
    Dog copy_dog = *dog;
    delete dog;
    std::cout << copy_dog.getBrain()->ideas[0] << std::endl;

    
    std::cout << std::endl << "--- Programm end ---" << std::endl;
    return 0;
}