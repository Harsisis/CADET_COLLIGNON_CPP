#ifndef DEF_CMPT_INFO_File_HPP
#define DEF_CMPT_INFO_File_HPP
#include <cstdlib>
#include <ostream>
#include "Liste.hpp"

namespace cmpt_info{

    template <typename ValueType>
    class File : public Liste{
    protected:
        List<ValueType> _internalList;
    public:
        File();
        void push(ValueType const &item);
        size_t size() const;
        bool empty() const;
        ValueType pop();
        ValueType peek() const;
        void print(std::ostream &stream) const;
    };
    template <typename ValueType>
    File<ValueType>::File() : _internalList(){
    }
    template <typename ValueType>
    void File<ValueType>::push(ValueType const &item){
        _internalList.push_back(item);
    }
    template <typename ValueType>
    size_t File<ValueType>::size() const{
        return _internalList.size();
    }
    template <typename ValueType>
    bool File<ValueType>::empty() const{
        return _internalList.empty();
    }
    template <typename ValueType>
    std::ostream &operator<<(std::ostream &stream, File<ValueType> const &File){
        File.print(stream);
        return stream;
    }
    template <typename ValueType>
    ValueType File<ValueType>::pop(){
        ValueType *value = &(*_internalList.begin());
        _internalList.pop_front();
        return *value;
    }
    template <typename ValueType>
    ValueType File<ValueType>::peek() const{
        return *_internalList.begin();
    }
    template <typename ValueType>
    void File<ValueType>::print(std::ostream &stream) const{
        stream << _internalList;
    }
}

#endif
