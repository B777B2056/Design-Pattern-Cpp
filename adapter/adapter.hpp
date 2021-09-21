#ifndef ADAPTER
#define ADAPTER

#include <iostream>

class subject {
public:
    void method1() {
        std::cout << "Method 1." << std::endl;
    }

    void method2() {
        std::cout << "Method 2." << std::endl;
    }
};

class target {
public:
    virtual ~target() {}

    virtual void method() = 0;
};

class adapter : public target {
private:
    subject _s;

public:
    virtual void method() override {
        _s.method1();
        _s.method2();
    }
};

#endif

