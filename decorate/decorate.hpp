#ifndef DECORATE
#define DECORATE

#include <iostream>

/* Component(original object) */
class component {
public:
    virtual ~component() {}

    virtual void operation() {
        std::cout << "Original operation" << std::endl;
    }
};

/* State Decorator */
class state_decorator : public component {
protected:
    component _c;
    int _state;    // add a state to original object

public:
    state_decorator(const component& c) : _c(c) {}
    
    state_decorator(component&& c) : _c(c) {}

    virtual void operation() override {
        _c.operation();
        _state = 1;
        std::cout << "State has changed." << std::endl;
    }
};

/* Operation Decorator */
class operation_decorator : public component {
protected:
    component _c;
    
    // add a operation to original object
    void _add_operation() {
        std::cout << "Add operation." << std::endl;
    }

public:
    operation_decorator(const component& c) : _c(c) {}
    
    operation_decorator(component&& c) : _c(c) {}

    virtual void operation() override {
        _c.operation();
        this->_add_operation();
    }
};

#endif

