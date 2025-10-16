#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;        
    char current_char;   

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[i])
        {
            int start = 0;          
            while (av[i][start] && av[i][start] == ' ')
                start++;            

            int end = 0;
            while (av[i][end])
                end++;              
            end--;                 
            while (end >= start && av[i][end] == ' ')
                end--;               
            int j = start;         
            while (j <= end)        
            {
                current_char = toupper(av[i][j]);
                std::cout << current_char;
                j++;
            }

            if (av[i + 1])       
                std::cout << ' ';

            i++;                  
        }
        std::cout << std::endl;      
    }
    return 0;
}
