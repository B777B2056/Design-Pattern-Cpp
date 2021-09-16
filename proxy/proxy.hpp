#ifndef PROXY
#define PROXY

#include <iostream>

class abstract_subject {
public:
    virtual ~abstract_subject() {}

    virtual void operation() = 0;
};

class concrete_subject : public abstract_subject {
public:
    virtual void operation() override {
        std::cout << "Concrete subject." << std::endl;
    }
};

class proxy : public abstract_subject {
protected:
    concrete_subject _cs;

public:
    proxy() : _cs() {}

    virtual void operation() override {
        _cs.operation();
    }
};

#endif

