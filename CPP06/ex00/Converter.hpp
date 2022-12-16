#ifndef _CONVERTER_HPP_
# define _CONVERTER_HPP_

# include <stdexcept>
# include <iostream>
# include <string>

class Converter
{
    private:
        Converter(void);
        void toChar(const std::string str);
        void toInt(const std::string str);
        bool checkPsevdo(const std::string str);
        void toFloat(const std::string str);
        void toDouble(const std::string str);
        
    public:
        Converter(const std::string str);
        Converter(const Converter &other);
        Converter &operator=(const Converter &other);
        ~Converter();
};

#endif