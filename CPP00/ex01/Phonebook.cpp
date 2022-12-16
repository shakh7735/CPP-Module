# include <iostream>
#include "Contacts.h"

void    test(Contact conts[8])
{
    std::string info[5] = {"first", "last", "nick", "05983458", "secret"};
        
    for(int i = 0; i < 8; i++)
    {
        info[0] +=  string(1, "01234567"[i]);
        info[1] +=  string(1, "01234567"[i]);
        info[2] +=  string(1, "01234567"[i]);
        info[3] +=  string(1, "01234567"[i]);
        info[4] +=  string(1, "01234567"[i]);
        conts[i].set_memebers(info, i);
    }
}

int check_digit(std::string num)
{
    for(unsigned i = 0; i < num.size(); i++)
        if ((i == 0 && num[i] != '+' && !isdigit(num[i])) || (i != 0 && !isdigit(num[i])))
            return (0);
    return(1);
}

void add_contact(Contact *contact, int id)
{
    int i;
    std::string phrases[5] = {"first name: ", "last name: ", "nickname: ",  "phone number: ", "darkest secret: "};
    std::string info[5];

    i = -1;
    while (++i < 5)
    {
        std::cout << "Enter " << phrases[i];
        getline(std::cin, info[i]);
        if (info[i].empty())
        {
            std::cout << "The field cannot be empty!\n";
            i--;
        }
        if (i == 3 && !check_digit(info[i]))
        {
            std::cout << "The field can only contain numbers and a plus sign!\n";
            i--;
        }
    }
    (*contact).set_memebers(info, id);
}

void search_contact(Contact *conts)
{
    string inp;
    int id = -1;
    
    std::cout << "Enter id contact (0 - 7): ";
    getline(cin, inp);
    while (id == -1)
    {
        if (inp[0] && (inp[0] < '0' || inp[0] > '7' || inp[1]))
        {
            std::cout << "Your not correct enter id contact!" << endl;
            std::cout << "Enter id contact (0 - 7): ";
            getline(std::cin , inp);
        }
        else if (inp[0])
            id = stoi(inp);
    }
    conts[id].print_info();
}

int main()
{
    Contact conts[8];
    int i = 0;
    string line;
    
    // test(conts);
    // ADD, SEARCH, EXIT
    while (42)
    {
        std::cout << "Enter a command (add, search or exit): ";
        getline(cin, line);
        if (line == "exit")
            break ;
        else if (line == "add")
        {
            add_contact(&conts[i] , i);
            (++i > 7) ? i = 0: i;
        }
        else if (line == "search")
            search_contact(conts);
        else
            std::cout << "Invalid command entered!\n";
    }
    std::cout << "Program completed!\n";
    return 0;
}