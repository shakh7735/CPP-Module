#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <set>
#include <vector>
#include <iterator>


#define ONE_ELEM    "SpanException: It is not possible to compare one number"
#define FULL_ELEM   "SpanException: the array is full"


// typedef std::vector<int>::iterator InIter;
// typedef std::set<int>::iterator InIter2;

class Span {
    
    private :
        size_t max_size;
        std::multiset<int>    arr;
        
    public :
        Span (void);
        Span (size_t N);
        ~Span (void);
        Span(Span const &src);
		Span &operator=(Span const &src);
		
		void addNumber(int n);
// 		void addNumber(InIter begin, InIter end);
// 		void addNumber(InIter2 begin, InIter2 end);
		
		template<typename Iter>
        void addNumber(Iter begin, Iter end)
        {
            if (this->arr.size() + std::distance(begin, end) > this->max_size)
        		throw (std::length_error(FULL_ELEM));
        	this->arr.insert(begin, end);
        };
        
		size_t shortestSpan() const;
		size_t longestSpan() const;
};

#endif