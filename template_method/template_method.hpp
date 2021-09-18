#ifndef TEMPLATE
#define TEMPLATE

#include <iostream>

class abstruct_class {
public:
    virtual ~abstruct_class() {}

    virtual void template_method() {
        operation1();
        operation2();
    }

    virtual void operation1() = 0;

    virtual void operation2() = 0;
};

class concrete_class : public abstruct_class {
public:
    virtual void operation1() override {
        std::cout << "Operation 1." << std::endl;
    }

    virtual void operation2() override {
        std::cout << "Operation 2." << std::endl;
    }
};

#endif

