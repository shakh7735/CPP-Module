#include "Data.hpp"

int main()
{
    Data data1;
    Data *data2;
    uintptr_t ser;

    data1.a = 1;
    data1.b = 2;
    data1.c = 3;
    
    printData(data1);
    ser = serialize(&data1);
    data2 = deserialize(ser);
    printData(*data2);
    printAdress(&data1);
    printAdress(data2);
}