#include "abstract_factory.hpp"

std::shared_ptr<productA> concrete_factory_1::create_productA() {
    return std::shared_ptr<productA>(new productA1());
}

std::shared_ptr<productB> concrete_factory_1::create_productB() {
    return std::shared_ptr<productB>(new productB1());
}

std::shared_ptr<productA> concrete_factory_2::create_productA() {
    return std::shared_ptr<productA>(new productA2());
}

std::shared_ptr<productB> concrete_factory_2::create_productB() {
    return std::shared_ptr<productB>(new productB2());
}

void productA1::operation() {
    std::cout << "Product A1" << std::endl;
}

void productA2::operation() {
    std::cout << "Product A2" << std::endl;
}

void productB1::operation() {
    std::cout << "Product B1" << std::endl;
}

void productB2::operation() {
    std::cout << "Product B2" << std::endl;
}

