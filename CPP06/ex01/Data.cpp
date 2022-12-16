#include "Data.hpp"

std::uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

void printData(Data data)
{
    std::cout << "a = " << data.a << " : b = " << data.b \
    << " : c = " << data.c << std::endl;
}

void printAdress(Data *data)
{
    std::cout << "Adrress :" << data << std::endl;
}