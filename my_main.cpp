#include <iostream>
//#include <vector>
#include <stack>
#include "stack.hpp"

int     main()
{
    std::stack<int>     std_stack;
    ft::stack<int>      ft_stack;

    for (int i = 0; i < 3; i++)
    {
        // .empty()
        std::cout << "std_is_empty:\t" << std_stack.empty() <<std::endl
        std::cout << "ft_is_empty:\t" << ft_stack.empty() <<std::endl;
        std::cout << std::endl;

        // .top
        std::cout << "std_top:\t" << std_stack.top() <<std::endl
        std::cout << "ft_top:\t" << ft_stack.top() <<std::endl;

        // .push() && .size()
        std_stack.push(i);
        ft_stack.push(i);
        std::cout << "std_size:\t" << std_stack.size() << std::endl;
        std::cout << "ft_size:\t" << ft_stack.size() << std::endl;
        std::cout << std::endl;

    }

    for (int i = 3; i < 0; i--)
    {
        // .empty()
        std::cout << "std_is_empty:\t" << std_stack.empty() <<std::endl
        std::cout << "ft_is_empty:\t" << ft_stack.empty() <<std::endl;
        std::cout << std::endl;

        // .top
        std::cout << "std_top:\t" << std_stack.top() <<std::endl
        std::cout << "ft_top:\t" << ft_stack.top() <<std::endl;

        // .pop() && .size()
        std_stack.pop(i);
        ft_stack.pop(i);
        std::cout << "std_size:\t" << std_stack.size() << std::endl;
        std::cout << "ft_size:\t" << ft_stack.size() << std::endl;
        std::cout << std::endl;
    }

    return (0);
}
