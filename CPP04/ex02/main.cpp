#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    
    // AAnimal a;
    Dog *dog = new Dog();
    std::cout << dog->getBrain()->ideas[0] << std::endl;
    dog->getBrain()->ideas[0] = "-- I am Dog--";
    Dog copy_dog = *dog;
    delete dog;
    std::cout << copy_dog.getBrain()->ideas[0] << std::endl;
    std::cout << std::endl << "--- Programm end ---" << std::endl;
    return 0;
}