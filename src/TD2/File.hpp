#ifndef DEF_CMPT_INFO_QUEUE_HPP
#define DEF_CMPT_INFO_QUEUE_HPP
#include <cstdlib>
#include <ostream>
#include "Liste.hpp"

namespace cmpt_info{

    template <typename ValueType>
    class Queue{
    protected:
        List<ValueType> _internalList;
    public:
        Queue();
        void push(ValueType const &item);
        size_t size() const;
        bool empty() const;
        ValueType pop();
        ValueType peek() const;
        void print(std::ostream &stream) const;
    };
    template <typename ValueType>
    Queue<ValueType>::Queue() : _internalList(){
    }
    template <typename ValueType>
    void Queue<ValueType>::push(ValueType const &item){
        _internalList.push_back(item);
    }
    template <typename ValueType>
    size_t Queue<ValueType>::size() const{
        return _internalList.size();
    }
    template <typename ValueType>
    bool Queue<ValueType>::empty() const{
        return _internalList.empty();
    }
    template <typename ValueType>
    std::ostream &operator<<(std::ostream &stream, Queue<ValueType> const &queue){
        queue.print(stream);
        return stream;
    }
    template <typename ValueType>
    ValueType Queue<ValueType>::pop(){
        ValueType *value = &(*_internalList.begin());
        _internalList.pop_front();
        return *value;
    }
    template <typename ValueType>
    ValueType Queue<ValueType>::peek() const{
        return *_internalList.begin();
    }
    template <typename ValueType>
    void Queue<ValueType>::print(std::ostream &stream) const{
        stream << _internalList;
    }
}

#endif
