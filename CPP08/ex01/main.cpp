#include <iostream>
#include "Span.hpp"

int main()
{
    std::cout << "------SUBJECT TEST-------" << std::endl;
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    std::cout << "---------MY TEST---------" << std::endl;
    std::cout << std::endl << "TEST1---VECTOR-----------" << std::endl;
    {
        srand(time(0));
        try {
    		std::vector<int> tmp;
    		Span sprandom = Span(50000);
    		for (int i = 0; i < 50000; i++)
    			tmp.push_back(rand() % 1000000);
    		sprandom.addNumber(tmp.begin(), tmp.end());
    		std::cout << "Longest  Span: " << sprandom.longestSpan() << std::endl;
            std::cout << "Shortest Span: " << sprandom.shortestSpan() << std::endl;
        } 
        catch ( std::exception& e ) {
            std::cout << e.what() << std::endl; 
        }
    }
    
    std::cout << std::endl << "TEST2---SET--------------" << std::endl;
    {
        srand(time(0));
        try {
    		std::set<int> tmp;
    		Span sprandom = Span(50000);
    		for (int i = 0; i < 50000; i++)
    			tmp.insert(rand() % 1000000);
    		sprandom.addNumber(tmp.begin(), tmp.end());
    		std::cout << "Longest  Span: " << sprandom.longestSpan() << std::endl;
            std::cout << "Shortest Span: " << sprandom.shortestSpan() << std::endl;
        } 
        catch ( std::exception& e ) {
            std::cout << e.what() << std::endl; 
        }
    }
    
    std::cout << std::endl << "TEST3---exception--------" << std::endl;
    {
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
    		sp.addNumber(16);
        } 
        catch ( std::exception& e ) {
            std::cout << e.what() << std::endl; 
        }
        
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
        } 
        catch ( std::exception& e ) {
            std::cout << e.what() << std::endl; 
        }
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        } 
        catch ( std::exception& e ) {
            std::cout << e.what() << std::endl; 
        }
    }
    return 0;
}