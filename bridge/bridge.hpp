#ifndef BRIDGE
#define BRIDGE

#include <iostream>

class implementor {
public:
    virtual ~implementor() {}

    virtual void operation_impl() = 0;
};

class abstraction {
protected:
    implementor* _impl;

public:
    virtual ~abstraction() {}
    
    abstraction(implementor* impl) : _impl(impl) {}
    virtual void operation() = 0;
};

class concrete_implementor : public implementor {
public:
    virtual void operation_impl() override {
        std::cout << "Concrete implementor" << std::endl;
    }
};

class redefined_abstraction : public abstraction {
public:
    redefined_abstraction(implementor* impl) : abstraction(impl) {}

    virtual void operation() override {
        this->_impl->operation_impl();
    }
};

#endif

