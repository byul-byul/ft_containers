#include <iostream>
#include <vector>
#include <stack>

int     main()
{
    std::stack<int>     std_stack;

    for (int i = 0; i < 10; i++)
    {
        std_stack.push(i);
        std::cout << " size: " << std_stack.size() << std::endl;
    }
    return (0);
}
