#ifndef FACTORY
#define FACTORY

#include <memory>
#include <iostream>

/* Abstract Product */
class product {
public:
    virtual ~product() {}

    virtual void operation() = 0;
};

/* Concrete Product */
class concrete_product_A : public product {
public:
    virtual void operation() {
        std::cout << "Product A." << std::endl;
    }
};

class concrete_product_B : public product {
public:
    virtual void operation() {
        std::cout << "Product B." << std::endl;
    }
};

/* Abstract Factory */
class factory {
public:
    virtual ~factory() {}

    virtual std::shared_ptr<product> create_product() = 0;
};

/* Concrete Factory */
class concrete_factory_A : public factory {
public:
    virtual std::shared_ptr<product> create_product() {
        return std::shared_ptr<product>(new concrete_product_A());
    }
};

class concrete_factory_B : public factory {
public:
    virtual std::shared_ptr<product> create_product() {
        return std::shared_ptr<product>(new concrete_product_B());
    }
};

#endif

