# include "Contacts.h"

void Contact::print_info()
{
    if ( m_first_name == "" && m_last_name == "" && m_phone_number == "")
        std::cout << "Not created contact!" << std::endl;
    else
    {
        std::cout << "contact information: ";
        std::cout << "|" << transformer_line(std::string(1,"01234567"[m_id])) << "|" << transformer_line(m_first_name) << "|" 
                << transformer_line(m_last_name) << "|" << transformer_line(m_nickname) << "|\n";
    }
}

std::string Contact::transformer_line(std::string str)
{
    if (str.size() > 10)
    {
        str.resize(9);
        str.append(1,'.');
    }
    else
        str.insert(0, 10 - str.size(), ' ');
    return (str);
}

void    Contact::set_memebers(std::string info[5], int id)
{
    m_first_name        = info[0];
    m_last_name         = info[1];
    m_nickname          = info[2];
    m_phone_number      = info[3];
    m_darkest_secret    = info[4];
    m_id                = id;
}