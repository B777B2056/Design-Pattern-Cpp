// #include "static_factory/static_factory.hpp"
// #include "strategy/strategy.hpp"
// #include "decorate/decorate.hpp"
// #include "proxy/proxy.hpp"
// #include "factory/factory.hpp"
// #include "prototype/prototype.hpp"
// #include "template_method/template_method.hpp"
// #include "facade/facade.hpp"
// #include "builder/builder.hpp"
#include "observer/observer.hpp"

// void static_factory_test();
// void strategy_test();
// void decorate_test();
// void proxy_test();
// void factory_test();
// void prototype_test();
// void template_method_test();
// void facade_test();
// void builder_test();
void observer_test();

int main(int argc, char** argv) {
    // static_factory_test();
    // strategy_test();
    // decorate_test();
    // proxy_test();
    // factory_test();
    // prototype_test();
    // template_method_test();
    // facade_test();
    // builder_test();
    observer_test();
    return 0;
}

/*
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

void factory_test() {
    char symbol;
    std::cout << "Input \'a\' or \'b\' for factory method:";
    std::cin >> symbol;
    if(symbol == 'a')
        (concrete_factory_A().create_product())->operation();
    else if(symbol == 'b')
        (concrete_factory_B().create_product())->operation();
}

void prototype_test() {
    char symbol;
    std::cout << "Input \'s\'(shallow) or \'d\'(deep) for prototype:";
    std::cin >> symbol;
    if(symbol == 's')
        shallow_clone().clone();
    else if(symbol == 'd')
        deep_clone().clone();
}

void template_method_test() {
    concrete_class().template_method();
}

void facade_test() {
    facade f;
    f.operation1();
    f.operation2();
}

void builder_test() {
    char a1, a2;
    std::cout << "Input attribute 1 and attribute 2(use space to spilt them):";
    std::cin >> a1 >> a2;
    concrete_builder b;
    director d;
    d.process(&b, a1, a2);
    b.get_product().method();
}
*/

void observer_test() {
    int s;
    std::cout << "Input state: ";
    std::cin >> s;
    concrete_subject c;
    concrete_observer o1(&c), o2(&c), o3(&c);
    c.add_observer(&o1);
    c.add_observer(&o2);
    c.add_observer(&o3);
    c.subject_state = s;
    c.notify();
}

