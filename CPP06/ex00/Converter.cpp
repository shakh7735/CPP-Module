# include "Converter.hpp"

Converter::Converter(const std::string str)
{
    toChar(str);
    toInt(str);
    toFloat(str);
    toDouble(str);
}

Converter::Converter(Converter const &other)
{
    this->operator=(other);
}

Converter &Converter::operator=(Converter const &other)
{
	(void)other;
	return (*this);
}

Converter::~Converter() 
{
    // std::cout << "Delete Converter class" << std::endl;
}

void Converter::toChar(const std::string str)
{
    char c;
    
	std::cout << "char: ";
	try {
	    if (str.length()==1 && !std::isdigit(str[0]))
	        c = str[0];
	    else
	        c = static_cast<char>(stoi(str));
		if (!isprint(c))
			std::cout << "Non displayable" << std::endl;
		else
		    std::cout << "'" << c << "'" << std::endl;
	} 
	catch(...) {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::toInt(const std::string str)
{
    int num;
    
	std::cout << "int: ";
	try {
        num = static_cast<int>(stoi(str));
	    std::cout << num << std::endl;
	} 
	catch(...) {
		std::cout << "impossible" << std::endl;
	}
}

bool Converter::checkPsevdo(const std::string str)
{
    if (str == "-inf" || str == "+inf" || str == "nan"  \
        || str == "-inff" || str == "+inff" || str == "nanf")
        return (true);
    return (false);
}

void Converter::toFloat(const std::string str)
{
    float num;
    
	std::cout << "float: ";
    if (checkPsevdo(str))
    {
        std::cout << atof(str.c_str()) << "f" << std::endl;
        return;
    }
	try {
	    num = stof(str);
	    std::cout << num;
	    if (num - static_cast<int>(num) == 0)
	        std::cout << ".0";
	    std::cout << "f" << std::endl;
	} 
	catch(...) {
		std::cout << "nanf" << std::endl;
	}
}

void Converter::toDouble(const std::string str)
{
    double num;
    
	std::cout << "double: ";
    if (checkPsevdo(str))
    {
        std::cout << atof(str.c_str()) << std::endl;
        return;
    }
	try {
	    num = stod(str);
	    std::cout << num;
	    if (num - static_cast<int>(num) == 0)
	        std::cout << ".0";
	    std::cout << std::endl;
	} 
	catch(...) {
		std::cout << "nan" << std::endl;
	}
}