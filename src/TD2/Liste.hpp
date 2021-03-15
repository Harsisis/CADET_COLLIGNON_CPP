//#ifndef DEF_CMPT_INFO_Liste_HPP
//#define DEF_CMPT_INFO_Liste_HPP
//#include <cstdlib>
//#include <stdexcept>
//#include <ostream>
//
//namespace cmpt_info
//{
//    template <typename ValueType>
//    class Iterator;
//    template <typename ValueType>
//    class Liste{
//        friend Iterator<ValueType>;
//
//    protected:
//        template <typename NodeValueType>
//        struct ListeNode{
//            NodeValueType _item;
//            ListeNode<NodeValueType> *_previous;
//            ListeNode<NodeValueType> *_next;
//        };
//        typedef ListeNode<ValueType> node_t;
//
//        ListeNode<ValueType> *_first;
//        ListeNode<ValueType> *_last;
//        size_t _size;
//
//    public:
//        typedef Iterator<ValueType> iterator;
//        Liste();
//        ~Liste();
//        void push_front(ValueType const &item);
//
//        void push_back(ValueType const &item);
//
//        size_t size() const;
//
//        bool empty() const;
//
//        void insert(iterator &it, ValueType const &item);
//
//        void remove(iterator &it);
//
//        void pop_front();
//
//        void pop_back();
//
//        iterator begin() const;
//
//        iterator rbegin() const;
//
//        iterator end() const;
//
//        iterator rend() const;
//    };
//
//    template <typename ValueType>
//    class Iterator{
//        friend Liste<ValueType>;
//
//    protected:
//        typename Liste<ValueType>::node_t *_ptr;
//        typename Liste<ValueType>::node_t *_next;
//        typename Liste<ValueType>::node_t *_prev;
//        const Liste<ValueType> *_Liste;
//        bool _reverse;
//
//        Iterator(const Liste<ValueType> *Liste, typename Liste<ValueType>::node_t *ptr, bool reverse);
//
//        void refresh();
//
//    public:
//
//        ValueType &operator->() const;
//
//        Iterator<ValueType> &operator--();
//
//        Iterator<ValueType> operator--(int);
//
//        ValueType &operator*() const;
//
//        Iterator<ValueType> &operator++();
//
//        Iterator<ValueType> operator++(int);
//
//        bool operator==(const Iterator<ValueType> &right) const;
//
//        bool operator!=(const Iterator<ValueType> &right) const;
//    };
//    template <typename ValueType>
//    Liste<ValueType>::Liste() : _first(nullptr),
//                              _last(nullptr),
//                              _size(0)
//    {
//        //constructor
//    }
//    template <typename ValueType>
//    Liste<ValueType>::~Liste()
//    {
//        node_t *it;
//        node_t *next = _first;
//        while ((it = next) != nullptr)
//        {
//            next = it->_next;
//            delete it;
//        }
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::push_front(ValueType const &item){
//        node_t *node = new node_t();
//        node->_item = item;
//        node->_next = _first;
//        node->_previous = nullptr;
//        if (_first != nullptr)
//            _first->_previous = node;
//        if (_last == nullptr)
//            _last = node;
//        _first = node;
//        ++_size;
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::push_back(ValueType const &item){
//        node_t *node = new node_t();
//        node->_item = item;
//        node->_previous = _last;
//        node->_next = nullptr;
//        if (_last != nullptr)
//            _last->_next = node;
//        if (_first == nullptr)
//            _first = node;
//        _last = node;
//        ++_size;
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::insert(iterator &it, ValueType const &item){
//        if (it._Liste != this)
//            throw std::invalid_argument("Iterator not pointing this Liste.");
//        else if (it == end())
//            push_back(item);
//        else if (it == begin())
//            push_front(item);
//        else if (it == rend())
//            push_front(item);
//        else if (it == rbegin())
//            push_back(item);
//        else{
//            if (it._reverse){
//                node_t *node = new node_t();
//                node->_item = item;
//                if (it._ptr->_next != nullptr)
//                    it._ptr->_next->_previous = node;
//                node->_next = it.ptr->_next;
//                it._ptr->_next = node;
//                node->_previous = it._ptr;
//                ++_size;
//            }else{
//                node_t *node = new node_t();
//                node->_item = item;
//                if (it._ptr->_previous != nullptr)
//                    it._ptr->_previous->_next = node;
//                node->_previous = it.ptr->_previous;
//                it._ptr->_previous = node;
//                node->_next = it._ptr;
//                ++_size;
//            }
//        }
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::remove(iterator &it){
//        if (it._Liste != this)
//            throw std::invalid_argument("Iterator not pointing this Liste.");
//        if (_first == it._ptr)
//            _first = it._ptr->_next;
//        if (_last == it._ptr)
//            _last = it._ptr->_previous;
//        if (it._ptr->_previous != nullptr)
//            it._ptr->_previous->_next = it._ptr->_next;
//        if (it._ptr->_next != nullptr)
//            it._ptr->_next->_previous = it._ptr->_previous;
//        delete it._ptr;
//        --_size;
//    }
//    template <typename ValueType>
//    size_t Liste<ValueType>::size() const{
//        return _size;
//    }
//    template <typename ValueType>
//    bool Liste<ValueType>::empty() const{
//        return size() == 0;
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::pop_front(){
//        remove(begin());
//    }
//    template <typename ValueType>
//    void Liste<ValueType>::pop_back(){
//        remove(rbegin());
//    }
//    template <typename ValueType>
//    typename Liste<ValueType>::iterator Liste<ValueType>::begin() const{
//        return iterator(this, _first, false);
//    }
//    template <typename ValueType>
//    typename Liste<ValueType>::iterator Liste<ValueType>::rbegin() const{
//        return iterator(this, _last, true);
//    }
//    template <typename ValueType>
//    typename Liste<ValueType>::iterator Liste<ValueType>::end() const{
//        return iterator(this, nullptr, false);
//    }
//    template <typename ValueType>
//    typename Liste<ValueType>::iterator Liste<ValueType>::rend() const{
//        return iterator(this, nullptr, true);
//    }
//    template <typename ValueType>
//    std::ostream &operator<<(std::ostream &stream, Liste<ValueType> const &Liste){
//        stream << "[ ";
//        bool first = true;
//        for (auto it = Liste.begin(); it != Liste.end(); ++it)
//        {
//            if (!first)
//                stream << ", ";
//            else
//                first = false;
//            stream << *it;
//        }
//        stream << " ]";
//        return stream;
//    }
//    template <typename ValueType>
//    Iterator<ValueType>::Iterator(const Liste<ValueType> *Liste, typename Liste<ValueType>::node_t *ptr, bool reverse) : _ptr(ptr),_next(nullptr),_prev(nullptr),_Liste(Liste),_reverse(reverse){
//        refresh();
//    }
//    template <typename ValueType>
//    void Iterator<ValueType>::refresh(){
//        if (_ptr != nullptr)
//        {
//            if (_reverse)
//            {
//                _next = _ptr->_previous;
//                _prev = _ptr->_next;
//            }
//            else
//            {
//                _next = _ptr->_next;
//                _prev = _ptr->_previous;
//            }
//        }else{
//            _next = nullptr;
//            _prev = _reverse ? _Liste->_first : _Liste->_last;
//        }
//    }
//    template <typename ValueType>
//    ValueType &Iterator<ValueType>::operator->() const{
//        return _ptr->_item;
//    }
//    template <typename ValueType>
//    ValueType &Iterator<ValueType>::operator*() const{
//        return operator->();
//    }
//    template <typename ValueType>
//    Iterator<ValueType> &Iterator<ValueType>::operator++(){
//        _ptr = _next;
//        refresh();
//        return *this;
//    }
//    template <typename ValueType>
//    Iterator<ValueType> Iterator<ValueType>::operator++(int){
//        Iterator<ValueType> tmp(*this);
//        operator++();
//        return tmp;
//    }
//    template <typename ValueType>
//    Iterator<ValueType> &Iterator<ValueType>::operator--(){
//        _ptr = _prev;
//        refresh();
//        return *this;
//    }
//    template <typename ValueType>
//    Iterator<ValueType> Iterator<ValueType>::operator--(int){
//        Iterator<ValueType> tmp(*this);
//        operator--();
//        return tmp;
//    }
//    template <typename ValueType>
//    bool Iterator<ValueType>::operator==(const Iterator<ValueType> &right) const{
//        return _ptr == right._ptr && _reverse == right._reverse;
//    }
//    template <typename ValueType>
//    bool Iterator<ValueType>::operator!=(const Iterator<ValueType> &right) const{
//        return !operator==(right);
//    }
//}
//
//#endif


#ifndef NOEUDDELISTE_CPP
#include "NoeudDeListe.cpp"

//idem pour T ici, comme ds NeudDeListe

class Liste {
protected:
    NoeudDeListe* pPremier;
    NoeudDeListe* pDernier;
    int nbElts;
public:
    NoeudDeListe* getpPremier() {
        return pPremier;
    }

    NoeudDeListe* getpDernier() {
        return pDernier;
    }

    Liste() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    void ajouterFin(string x) {
        NoeudDeListe *tmp = new NoeudDeListe(x); // mettre le type et cf différence...
        if (listeVide()) {
            this->pPremier = tmp;
            this->pDernier = tmp;
        } else {
            this->pDernier->setSuivant(tmp);
            this->pDernier = tmp;
        }
        this->nbElts++;
    }

    void retirerFin() {
        if (!listeVide()) {
            NoeudDeListe *tmp = pDernier;
            if ( pPremier == pDernier )
                pPremier = pDernier = NULL;
            else  {
                NoeudDeListe *pCourant= pPremier ;
                while ( pCourant->getSuivant()!= pDernier )
                    pCourant  = pCourant->getSuivant();
                pDernier= pCourant;
                pCourant->setSuivant(NULL);
            }
        }
    }

    virtual bool afficher() {
        cout << "Affichage de la liste :\n";
        NoeudDeListe* pListe = this->pPremier;
        if (listeVide()) {
            cout << "La Liste est vide.";
            return true;
        }
        for (int i = 1; i < nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pListe->afficher();
            pListe = pListe->getSuivant();
        }
        cout << "Nombre d'éléments : " << this->nbElts;

        return true;
    }

private:
    bool listeVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};
#endif
