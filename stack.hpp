#ifndef STACK_HPP
# define STACK_HPP

# include <vector> // <vector> --> "vector.hpp"

namespace ft
{
    template <class T, class Container = std::vector<T> > // vector<T> --> ft::vector<T> !!!
    class stack
    {
        public:
            typedef T           value_type;
            typedef Container   container_type;
            typedef size_t      size_type;

        public:
            explicit    stack(const container_type &ctnr = container_type()) : c(ctnr) {}
                        ~stack() {}
        public:
            bool                empty() const
            {
                return (c.empty());
            }
            size_type           size() const
            {
                return (c.size());
            }
            value_type          &top()
            {
                return (c.back());
            }
            const value_type    &top() const
            {
                return (c.back());
            }
            void                push (const value_type &val)
            {
                c.push_back(val);
            }
            void                pop()
            {
                c.pop_back();
            }
            
        public:
            template <class T_in, class Container_in>
            friend bool operator== (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);
            template <class T_in, class Container_in>
            friend bool operator!= (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);
            template <class T_in, class Container_in>
            friend bool operator< (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);
            template <class T_in, class Container_in>
            friend bool operator<= (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);
            template <class T_in, class Container_in>
            friend bool operator> (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);
            template <class T_in, class Container_in>
            friend bool operator>= (const stack<T_in,Container_in> &lhs, const stack<T_in,Container_in> &rhs);

        protected:
            container_type      c;
    };

    template <class T, class Container>
    bool operator== (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c == rhs.c);
    }
    template <class T, class Container>
    bool operator!= (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c != rhs.c);
    }
    template <class T, class Container>
    bool operator< (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c < rhs.c);
    }
    template <class T, class Container>
    bool operator<= (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c <= rhs.c);
    }
    template <class T, class Container>
    bool operator> (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c > rhs.c);
    }
    template <class T, class Container>
    bool operator>= (const stack<T,Container> &lhs, const stack<T,Container> &rhs)
    {
        return (lhs.c >= rhs.c);
    }
}

#endif