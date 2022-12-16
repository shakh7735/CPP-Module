#include "easyfind.hpp"

template<typename T>
typename T::iterator   easyfind(T &tab, int value)
{
    typename T::iterator it;
    // bool t = typeid(tab) == typeid(std::array<int, sizeof(tab)/sizeof(int)>);
    // std::string s = typeid(tab).name();
    // bool ts = ("St5arrayIiLm" + std::to_string(sizeof(tab)/sizeof(int)) + "EE" == s);
    // std::cout << "tab is type " << s << std::endl;

    // if (t)
    // {
    //     for(it= tab.begin() ; it != tab.end() ; it++)
    //         if (*it == value)
    //             break;
    // }
    // else
        it = std::find(tab.begin(), tab.end(), value);
    if (it == tab.end())
        throw (std::string("*Not found*"));
    return it;
}