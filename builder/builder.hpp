#ifndef BUILDER
#define BUILDER

#include <iostream>

class product {
public:
    char attribute1;
    char attribute2;

    void method() {
        std::cout << "Attribute 1 is " << attribute1 
                  << "\n"
                  << "Attribute 2 is " << attribute2
                  << std::endl;
    }
};

class builder {
public:
    virtual void build_part1(char a1) = 0;
    virtual void build_part2(char a2) = 0;
};

class concrete_builder : public builder {
protected:
    product _p;

public:
    virtual void build_part1(char a1) {
        _p.attribute1 = a1;
    }


    virtual void build_part2(char a2) {
        _p.attribute2 = a2;
    }

    product get_product() {
        return _p;
    }
};

class director {
public:
    void process(builder* b, char a1, char a2) {
        b->build_part1(a1);
        b->build_part2(a2);
    }
};

#endif

