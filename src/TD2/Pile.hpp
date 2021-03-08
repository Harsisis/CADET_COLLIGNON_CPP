#ifndef DEF_CMPT_INFO_Pile_HPP
#define DEF_CMPT_INFO_Pile_HPP

#include <cstdlib>
#include <ostream>
#include "Liste.hpp"

namespace cmpt_info {
    template<typename ValueType>
    class Pile : public Liste {

    protected:
        List <ValueType> _internalList;

    public:

        Pile();

        void push(ValueType const &item);

        size_t size() const;

        /**
         * @brief  Returns true if the Pile is empty
         * @return true if the Pile is empty
         */
        bool empty() const;

        /**
         * @brief  Removes the first item of the Pile, and returns it
         */
        ValueType pop();

        /**
         * @brief  Returns the first item of the Pile, without removing it
         */
        ValueType peek() const;

        /**
         * @brief  Write the Pile to the stream
         * @param  stream: stream to write on
         */
        void print(std::ostream &stream) const;
    };

    template<typename ValueType>
    Pile<ValueType>::Pile() : _internalList() {
        //constructor
    }

    template<typename ValueType>
    void Pile<ValueType>::push(ValueType const &item) {
        _internalList.push_back(item);
    }

    template<typename ValueType>
    size_t Pile<ValueType>::size() const {
        return _internalList.size();
    }

    template<typename ValueType>
    bool Pile<ValueType>::empty() const {
        return _internalList.empty();
    }

    template<typename ValueType>
    ValueType Pile<ValueType>::pop() {
        ValueType *value = &(*_internalList.end());
        _internalList.pop_back();
        return *value;
    }

    template<typename ValueType>
    ValueType Pile<ValueType>::peek() const {
        return *_internalList.end();
    }

    template<typename ValueType>
    void Pile<ValueType>::print(std::ostream &stream) const {
        stream << _internalList;
    }

    template<typename ValueType>
    std::ostream &operator<<(std::ostream &stream, Pile<ValueType> const &Pile) {
        Pile.print(stream);
        return stream;
    }
}

#endif
