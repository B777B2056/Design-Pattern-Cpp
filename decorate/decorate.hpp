#ifndef DECORATE
#define DECORATE

#include <utility>
#include <iostream>

/* Component(original object) */
class component {
public:
    virtual ~component() {}

    virtual void operation() {
        std::cout << "Original operation" << std::endl;
    }
};

/* Abstract Decorator*/
class decorator : public component {
protected:
    component _c;

public:
    virtual ~decorator() {}

    virtual void decorate(const component& c) {
        this->_c = c;
    }

    virtual void decorate(component&& c) {
        this->_c = std::move(c);
    }

    virtual void operation() override {
        this->_c.operation();
    }
};

/* State Decorator */
class state_decorator : public decorator {
protected:
    int _state;    // add a state to original object

public:
    virtual void operation() override {
        decorator::_c.operation();
        _state = 1;
        std::cout << "State has changed." << std::endl;
    }
};

/* Operation Decorator */
class operation_decorator : public decorator {
protected:
    // add a operation to original object
    void _add_operation() {
        std::cout << "Add operation." << std::endl;
    }

public:
    virtual void operation() override {
        decorator::_c.operation();
        this->_add_operation();
    }
};

#endif

