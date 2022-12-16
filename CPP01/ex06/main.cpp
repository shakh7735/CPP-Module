#include "Karen.hpp"

int main(int ac, char **av)
{
 	{
 	    Karen karen;
     	int i;
     	
        if (ac != 2)
            return 0;
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        i = -1;
        while (++i < 4)
            if (av[1] == levels[i])
                break;
        switch(i)
        {
            case 0:
    			std::cout << "[ " << levels[0] << " ]" << std::endl;
    			karen.complain(levels[0]);
    			std::cout << std::endl;
				// fallthrough
    		case 1:
    			std::cout << "[ " << levels[1] << " ]" << std::endl;
    			karen.complain(levels[1]);
    			std::cout << std::endl;
				// fallthrough
    		case 2:
    			std::cout << "[ " << levels[2] << " ]" << std::endl;
    			karen.complain(levels[2]);
    			std::cout << std::endl;
				// fallthrough
    		case 3:
    			std::cout << "[ " << levels[3] << " ]" << std::endl;
    			karen.complain(levels[3]);
    			std::cout << std::endl;
    			break;
    		default:
    			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
 	}
	return 0;
}
