#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <string>
#include "easyfind.tpp"


template<typename T>
typename T::iterator easyfind(T &container, int value);

#endif