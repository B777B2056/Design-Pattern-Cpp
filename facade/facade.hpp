#ifndef FACADE
#define FACADE

#include <iostream>

class subsystem1 {
public:
    void operation() {
        std::cout << "Subsystem 1 operation." << std::endl;
    }
};

class subsystem2 {
public:
    void operation() {
        std::cout << "Subsystem 2 operation." << std::endl;
    }
};

class facade {
private:
    subsystem1 s1;
    subsystem2 s2;

public:
    void operation1() {
        s1.operation();
    }

    void operation2() {
        s2.operation();
    }
};

#endif

