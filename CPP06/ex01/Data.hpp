#ifndef DATA_HPP
# define DATA_HPP

# include <cstdint>
# include <iostream>

typedef struct {
    int a;
    int b;
    int c;
} Data;

std::uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
void printData(Data data);
void printAdress(Data *data);

#endif