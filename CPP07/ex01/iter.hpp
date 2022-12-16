#ifndef WHATEREVER_HPP
# define WHATEREVER_HPP

template<typename T>
void iter(T *arr, size_t n, void (*f)(T const &elem))
{
    for(size_t i = 0; i < n; i++)
        (*f)(arr[i]);
}

template<typename T>
void printElem(T const &val)
{
    if (typeid(T) == typeid(bool))
        std::cout << (val == 1 ? "true" : "false") << " ";
    else
	 std::cout << val << " ";
}

#endif