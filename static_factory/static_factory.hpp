#ifndef STATIC_FACTORY
#define STATIC_FACTORY

#include <memory>
#include <iostream>

/* Abstract Product */
class product {
public:
    virtual ~product() {}
    virtual void method() = 0;
};

/* Concrete Product A */
class concrete_product_A : public product {
public:
    virtual void method() {
        std::cout << "I'm product A." << std::endl;
    }
};

/* Concrete Product B */
class concrete_product_B : public product {
public:
    virtual void method() {
        std::cout << "I'm product B." << std::endl;
    }
};

/* Static Factory */
class static_factory {
public:
    std::shared_ptr<product> create_product(char flag) {
        product* p = nullptr;
        switch(flag) {
            case 'a':
                p = new concrete_product_A();
                break;
            case 'b':
                p = new concrete_product_B();
                break;
            default:
                break;
        }
        return std::shared_ptr<product>(p);
    }
};

#endif

