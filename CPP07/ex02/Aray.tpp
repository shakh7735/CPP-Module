template <typename T>
Array<T>::Array( void ):arr(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array( unsigned int size ):arr(new T[size]), _size(size)
{
}

template <typename T>
Array<T>::Array( const Array<T>& other )
{
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array<T>& other )
{
	this->arr = new T[other.size()];
	for (size_t i = 0; i < other.size(); ++i)
		this->arr[i] = other.arr[i];
	this->_size = other.size();
	return *this;
}

template <typename T>
Array<T>::~Array( void )
{
    if (this->_size > 0)
	    delete [] arr;
}

template <typename T>
T& Array<T>::operator[]( size_t i ) const
{
	if (i < 0 || i >= _size)
		throw  Array::OutOfBoundsException();
	return arr[i];
}


template <typename T>
size_t Array<T>::size( void ) const
{
	return _size;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}