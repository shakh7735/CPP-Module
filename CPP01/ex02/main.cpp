#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;
	
	std::cout << "Address of string: " << &str << std::endl;
	std::cout << "Address of string using stringPTR: " << strPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &strREF << std::endl;
	std::cout << "String using stringPTR: '" << *strPTR << "'" << std::endl;
	std::cout << "String using stringREF: '" << strREF << "'" << std::endl;
	std::cout << "Program end" << std::endl;
}
