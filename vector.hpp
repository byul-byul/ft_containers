#ifndef VECTOR_HPP
# define VECTOR_HPP

namespace ft
{
    template <class T, class Alloc = allocator<T> >
    class vector
    {
        public:
            typedef T                                   value_type;
            typedef Alloc                               allocator_type;
            typedef size_t                              size_type;
            typedef allocator_type::reference           reference;
            typedef allocator_type::const_reference     const_reference;
            typedef allocator_type::pointer             pointer;
            typedef allocator_type::const_pointer       const_pointer;
            typedef vector_iterator                     iterator
            typedef

        public:
            explicit    vector (const allocator_type& alloc = allocator_type())
    }
}

#endif