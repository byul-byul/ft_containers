#ifndef SIMPLE_VECTOR_HPP
# define SIMPLE_VECTOR_HPP

# include <iostream>

namespace my
{
    template <class T>
    class vector
    {
        private:
            T*      arr;
            size_t  sz;
            size_t  cap;
        
        public:
            vector() : arr(0), sz(0), cap(0)
            {
                std::cout << "new my vector costructed" << std::endl;
            }
    };
}

#endif