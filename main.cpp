#include "static_factory/static_factory.hpp"
#include "strategy/strategy.hpp"

void static_factory_test();
void strategy_test();

int main(int argc, char** argv) {
    // static_factory_test();
    strategy_test();
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

