#include "Span.hpp"

Span::Span(void) : max_size(0)
{
}

Span::Span(size_t N) : max_size(N)
{
}

Span::Span(Span const &src) : max_size(src.max_size)
{
    this->arr.clear();
    this->arr = src.arr;
}

Span &Span::operator=(Span const &src)
{
    this->max_size = src.max_size;
	this->arr.clear();
	this->arr = src.arr;
	return *this;
}

Span::~Span()
{
// 	std::cout << "Span Destructor called" << std::endl;
    this->arr.clear();
}

void Span::addNumber(int n)
{
   if (this->arr.size() == this->max_size)
		throw (std::length_error(FULL_ELEM));
	this->arr.insert(n); 
}

size_t Span::shortestSpan(void) const
{
    size_t size = this->arr.size();
	if (size < 2)
		throw (std::length_error(ONE_ELEM));
	std::multiset<int>::iterator first = this->arr.begin();
	std::multiset<int>::iterator next = ++this->arr.begin();
	size_t small = std::abs(*next++ - *first++);
	while (next != this->arr.end())
	{
		size_t diff = std::abs(*next++ - *first++);
		if (diff < small)
			small = diff;
	}
	return (small);
}

size_t Span::longestSpan(void) const
{
	if (this->arr.size() < 2)
		throw (std::length_error(ONE_ELEM));

	int max = *std::max_element(this->arr.begin(), this->arr.end());
	int min = *std::min_element(this->arr.begin(), this->arr.end());
	return (std::abs(max - min));
}

// void Span::addNumber(InIter begin, InIter end)
// {
//     addArr(begin, end);
// }

// void Span::addNumber(InIter2 begin, InIter2 end)
// {
//     addArr(begin, end);
// }

// //----------------------------------------------
// template<typename Iter>
// void Span::addArr(Iter begin, Iter end)
// {
// 	if (this->arr.size() + std::distance(begin, end) > this->max_size)
// 		throw (std::length_error(FULL_ELEM));
// 	this->arr.insert(begin, end);
// }