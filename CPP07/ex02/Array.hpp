#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
    private:
    	T       *arr;
    	size_t	_size;
    
    public:
    	Array(void);
    	Array(unsigned int size);
    	Array( const Array<T>& other );
    	Array<T>& operator=( const Array<T>& other );
    	~Array(void);
    
    	T& operator[](size_t i) const;
    	class OutOfBoundsException: public std::exception {
		    virtual const char* what() const throw();
	    };
    
    	size_t size(void) const;
};

# include "Aray.tpp"

#endif