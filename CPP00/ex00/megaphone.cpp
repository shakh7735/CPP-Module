#include <iostream>

int main(int ac, char **av)
{
    int i;
    
    if (ac > 1)
    {
        i = 0;
        while (av[++i])
        {
            int j = -1;
            while(av[i][++j])
                (av[i][j] >= 'a' && av[i][j] <= 'z') ? av[i][j] -= 32 : av[i][j];
            std::cout<<av[i];
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
