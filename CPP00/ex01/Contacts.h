#pragma once
#ifndef CONTACT_H
#define CONTACT_H
# include <iostream>
# include <string>

class Contact   {
    
    private:
        int m_id;
        std::string m_first_name;
        std::string m_last_name;
        std::string m_nickname;
        std::string m_phone_number;
        std::string m_darkest_secret;
        
    public:
        void print_info();
        void    set_memebers(std::string info[5], int id);
        std::string transformer_line(std::string str);
};

#endif