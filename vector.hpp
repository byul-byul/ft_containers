#ifndef VECTOR_HPP
# define VECTOR_HPP

namespace ft
{
    template <class T, class Allocator = std::allocator<T> >
    class vector
    {
        public:
            typedef T                                           value_type;
            typedef Allocator                                   allocator_type;
            typedef typename allocator_type::reference          reference;
            typedef typename allocator_type::const_reference    const_reference;
            typedef typename allocator_type::pointer            pointer;
            typedef typename allocator_type::const_pointer      const_pointer;
            //typedef ft::vector_iterator<>                       iterator;
            //typedef ft::vector_iterator<>                       const_iterator;
            //typedef ft::reverse_iterator<iterator>              reverse_iterator;
            //typedef ft::reverse_iterator<const_iterator>        const_reverse_iterator;
            typedef std::size_type                              size_type;
            typedef std::ptrdiff_t                              difference_type;

        private:
            allocator_type      _alloc;
            pointer             _ptr;
            size_type           _size;
            size_type           _capacity;
    
        public:
            explicit    vector(const allocator_type &alloc = allocator_type())
                        : _alloc(alloc)
                        , _ptr(0)
                        , _size(0)
                        , _capacity(0)
                        {}
            explicit    vector(size_type n
                                , const value_type &val = value_type()
                                , const allocator_type &alloc = allocator_type())
                        : _alloc(alloc),
                        , _size(n)
                        , _capacity(n)
            {
                _ptr = _alloc.allocate(_capacity);
                for (size_type i = 0; i < _size; i++)
                    _alloc.construct(_ptr + i, val);
            }
            template <class InputIterator> 
            vector(InputIterator first
                    , InputIterator last
                    , const allocator_type &alloc = allocator_type())
            {
                _size = 0;
                for (InputIterator i = first; i < last, i++)
                    _size++;
                _capacity = _size;
                _ptr = _alloc.allocate(_capacity);
                for (size_type i = 0; i < _size ; i++, first++)
                    _alloc.construct(_ptr + i, *first);
            }
            vector(const vector &vec)
            : _ptr(vec._ptr)
            , _alloc(vec._alloc)
            , _size(vec._size)
            , _capacity(vec._capacity)
            {
                _ptr = _alloc.allocate(_capacity);
                for (size_type i = 0; i < _size; i++)
                    _alloc.construct(_ptr + i, *(vec._ptr + i))

            }
            ~vector()
            {
                for (size_type i = 0; i < _size; i++)
                    _alloc.destroy(_ptr + i);
                _alloc.deallocate(_ptr, capacity);
            }
/*
        public:
            iterator                begin()
            {
                return (_ptr);
            }
            const_iterator          begin() const
            {
                return (_ptr);
            }
            iterator                end()
            {
                return (_ptr + _size);
            }
            const_iterator          end() const
            {
                return (_ptr + _size);
            }
            reverse_iterator        rbegin() {}
            const_reverse_iterator  rbegin() const {}
            reverse_iterator        rend() {}
            const_reverse_iterator  rend() const {}*/
        
        public:
            size_type               size() const
            {
                return (_size);
            }
            size_type               max_size() const
            {
                return (_alloc.max_size());
            }
            //void                    resize (size_type n, value_type val = value_type()){}
            size_type               capacity() const
            {
                return (_capacity);
            }
            bool                    empty() const
            {
                return (_szie == 0);
            }
            //void                    reserve (size_type n) {}

    };
}

#endif