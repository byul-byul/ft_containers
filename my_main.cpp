#include <iostream>
//#include <vector>
#include <stack>
#include "stack.hpp"

int     main()
{
    std::stack<int>     std_stack;
    ft::stack<int>      ft_stack;

    std::cout << "######  push()  ######" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
    {
        // .empty()
        std::cout << "i=" << i << " :std_is_empty:\t" << std_stack.empty() <<std::endl;
        std::cout << "i=" << i << " :ft_is_empty:\t" << ft_stack.empty() <<std::endl;
        std::cout << std::endl;

        // .push() && .size()
        std_stack.push(i);
        ft_stack.push(i);
        std::cout << "i=" << i << " :std_size:\t\t" << std_stack.size() << std::endl;
        std::cout << "i=" << i << " :ft_size:\t\t" << ft_stack.size() << std::endl;
        std::cout << std::endl;

        // .top
        std::cout << "i=" << i << " :std_top:\t\t" << std_stack.top() <<std::endl;
        std::cout << "i=" << i << " :ft_top:\t\t" << ft_stack.top() <<std::endl;
        std::cout << std::endl;
    }

    std::cout << "######  pop()  ######" << std::endl;
    std::cout << std::endl;

    for (int i = 3; i > 0; i--)
    {
        // .empty()
        std::cout << "i=" << i << " :std_is_empty:\t" << std_stack.empty() <<std::endl;
        std::cout << "i=" << i << " :ft_is_empty:\t" << ft_stack.empty() <<std::endl;
        std::cout << std::endl;

        // .top
        std::cout << "i=" << i << " :std_top:\t" << std_stack.top() <<std::endl;
        std::cout << "i=" << i << " :ft_top:\t\t" << ft_stack.top() <<std::endl;
        std::cout << std::endl;

        // .pop() && .size()
        std_stack.pop();
        ft_stack.pop();
        std::cout << "i=" << i << " :std_size:\t" << std_stack.size() << std::endl;
        std::cout << "i=" << i << " :ft_size:\t" << ft_stack.size() << std::endl;
        std::cout << std::endl;
    }

    return (0);
}
