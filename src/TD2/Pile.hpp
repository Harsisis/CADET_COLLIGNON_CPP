#ifndef DEF_CMPT_INFO_STACK_HPP
#define DEF_CMPT_INFO_STACK_HPP
#include <cstdlib>
#include <ostream>
#include "Liste.hpp"

namespace cmpt_info
{
    template <typename ValueType>
    class Stack{

    protected:
        List<ValueType> _internalList;

    public:

        Stack();

        void push(ValueType const &item);

        size_t size() const;
        /**
         * @brief  Returns true if the stack is empty
         * @return true if the stack is empty
         */
        bool empty() const;
        /**
         * @brief  Removes the first item of the stack, and returns it
         */
        ValueType pop();
        /**
         * @brief  Returns the first item of the stack, without removing it
         */
        ValueType peek() const;
        /**
         * @brief  Write the stack to the stream
         * @param  stream: stream to write on
         */
        void print(std::ostream &stream) const;
    };
    template <typename ValueType>
    Stack<ValueType>::Stack() : _internalList()
    {
        //constructor
    }
    template <typename ValueType>
    void Stack<ValueType>::push(ValueType const &item)
    {
        _internalList.push_back(item);
    }
    template <typename ValueType>
    size_t Stack<ValueType>::size() const
    {
        return _internalList.size();
    }
    template <typename ValueType>
    bool Stack<ValueType>::empty() const
    {
        return _internalList.empty();
    }
    template <typename ValueType>
    ValueType Stack<ValueType>::pop()
    {
        ValueType *value = &(*_internalList.end());
        _internalList.pop_back();
        return *value;
    }
    template <typename ValueType>
    ValueType Stack<ValueType>::peek() const
    {
        return *_internalList.end();
    }
    template <typename ValueType>
    void Stack<ValueType>::print(std::ostream &stream) const
    {
        stream << _internalList;
    }
    template <typename ValueType>
    std::ostream &operator<<(std::ostream &stream, Stack<ValueType> const &stack)
    {
        stack.print(stream);
        return stream;
    }
}

#endif
