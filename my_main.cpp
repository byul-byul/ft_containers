#include <iostream>
//#include <vector>
#include <stack>
#include "stack.hpp"

int     main()
{
    std::stack<int>     std_stack;
    ft::stack<int>      ft_stack;

    for (int i = 0; i < 5; i++)
    {
        std_stack.push(i);
        ft_stack.push(i);
        std::cout << " std_size: " << std_stack.size() << std::endl;
        std::cout << " ft_size: " << ft_stack.size() << std::endl;
        std::cout << std::endl;
    }
    return (0);
}
