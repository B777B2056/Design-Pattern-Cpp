#ifndef COR
#define COR

#include <iostream>

class handler {
protected:
    handler* _successor;

public:
    handler(handler* s) : _successor(s) {}
    virtual ~handler() {}
    virtual void handle(int) = 0;
};

class concrete_handler1 : public handler {
public:
    concrete_handler1(handler* s) : handler(s) {}

    virtual void handle(int f) override {
        if(f > 40) 
            std::cout << "Handler 1" << std::endl;
        else
            _successor->handle(f);
    }
};

class concrete_handler2 : public handler {
public:
    concrete_handler2(handler* s) : handler(s) {}

    virtual void handle(int f) override {
        std::cout << "Handler 2" << std::endl;
    }
};

#endif

