#ifndef VECTOR_RAI_HPP
# define VECTOR_RAI_HPP

//# include <iterator>
//# include <type_traits>

namespace ft
{
    template <class Category
                , class T
                , class Distance = std::ptrdiff_t
                , class Pointer = T*
                , class Reference = T&>
    struct iterator
    {
        typedef typename ft::iterator_traits<iterator_type>::iterator_category  iterator_category;
        typedef typename ft::iterator_traits<iterator_type>::iterator_type      value_type;
        typedef typename ft::iterator_traits<iterator_type>::difference_type    difference_type;
        typedef typename ft::iterator_traits<iterator_type>::pointer            pointer;
        typedef typename ft::iterator_traits<iterator_type>::reference          reference;
    };
}

#endif