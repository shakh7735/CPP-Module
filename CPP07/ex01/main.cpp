#include <iostream>
#include "iter.hpp"

int main(void) 
{
    int arr1[5] = { 0, 1, 2, 3, 4 };
	iter(arr1, 5, &printElem); std::cout << std::endl;

	float arr2[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(arr2, 5, &printElem); std::cout << std::endl;

	double arr3[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(arr3, 5, &printElem); std::cout << std::endl;

	bool arr4[2] = {false, true};
	iter(arr4, 2, &printElem); std::cout << std::endl;

	char arr5[5] = { 'B', 'a', 'r', 'e', 'v' };
	iter(arr5, 5, &printElem); std::cout << std::endl;
	iter(arr5, 2, &printElem); std::cout << std::endl;
	iter(arr5, 0, &printElem); std::cout << std::endl;
    return 0;
}