#include "static_factory/static_factory.hpp"
#include "strategy/strategy.hpp"
#include "decorate/decorate.hpp"
#include "proxy/proxy.hpp"

void static_factory_test();
void strategy_test();
void decorate_test();
void proxy_test();

int main(int argc, char** argv) {
    // static_factory_test();
    // strategy_test();
    // decorate_test();
    proxy_test();
    return 0;
}

void static_factory_test() {
    char symbol;
    std::cout << "Input \'a\' or \'b\' for static factory:";
    std::cin >> symbol;
    (static_factory::create_product(symbol))->method();
}

void strategy_test() {
    char symbol;
    std::cout << "Input \'a\' or \'b\' for strategy:";
    std::cin >> symbol;
    context(symbol).do_something();
}

void decorate_test() {
    char symbol;
    std::cout << "Input \'a\'(add state) or \'b\'(add operation) for dcorate:";
    std::cin >> symbol;
    component c;
    if(symbol == 'a') {
        state_decorator sd;
        sd.decorate(c);
        sd.operation();
    } else {
        operation_decorator od;
        od.decorate(c);
        od.operation();
    }
}

void proxy_test() {
    proxy().operation();
}

