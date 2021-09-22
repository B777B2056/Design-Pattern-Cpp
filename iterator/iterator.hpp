#ifndef ITERATOR
#define ITERATOR

#include <iostream>
#include <initializer_list>

template <class T>
class iterator {
public:
    virtual ~iterator() {}

    virtual T begin() = 0;
    virtual T next() = 0;
    virtual bool is_done() = 0;
    virtual T current() = 0;
};

template <class T>
class subject {
public:
    virtual ~subject() {}

    virtual iterator<T>* create_iterator() = 0;
};

template <class T>
class concrete_iterator;

template <class T>
class concrete_subject : public subject<T> {
private:
    int _n;
    T* _array;

public:
    concrete_subject(std::initializer_list<T> init);

    ~concrete_subject();

    virtual iterator<T>* create_iterator();

friend class concrete_iterator<T>;
};

template <class T>
class concrete_iterator : public iterator<T> {
private:
    int _index;
    concrete_subject<T>* _cs;

public:
    concrete_iterator(concrete_subject<T>*);

    virtual T begin() override;
    virtual T next() override;
    virtual bool is_done() override;
    virtual T current() override;
};

template <class T>
concrete_iterator<T>::concrete_iterator(concrete_subject<T>* cs) 
    : _index(0), _cs(cs) {
    
}

template <class T>
T concrete_iterator<T>::begin() {
    return this->_cs->_array[0];
}

template <class T>
T concrete_iterator<T>::next() {
    return this->_cs->_array[++(this->_index)];
}

template <class T>
bool concrete_iterator<T>::is_done() {
    return this->_index == this->_cs->_n;
}

template <class T>
T concrete_iterator<T>::current() {
    return this->_cs->_array[this->_index];
}

template <class T>
concrete_subject<T>::concrete_subject(std::initializer_list<T> init) 
    : _n(init.size()), _array(new T[init.size()]) {
    int i = 0;
    for(T t : init) 
        this->_array[i++] = t;
}

template <class T>
concrete_subject<T>::~concrete_subject() {
    delete[] _array;
}

template <class T>
iterator<T>* concrete_subject<T>::create_iterator() {
    return new concrete_iterator<T>(this);
}

#endif

