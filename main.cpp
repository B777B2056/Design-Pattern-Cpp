// #include "static_factory/static_factory.hpp"
// #include "strategy/strategy.hpp"
// #include "decorate/decorate.hpp"
// #include "proxy/proxy.hpp"
// #include "factory/factory.hpp"
// #include "prototype/prototype.hpp"
// #include "template_method/template_method.hpp"
// #include "facade/facade.hpp"
// #include "builder/builder.hpp"
// #include "observer/observer.hpp"
// #include "state/state.hpp"
// #include "abstract_factory/abstract_factory.hpp"
// #include "adapter/adapter.hpp"
// #include "memento/memento.hpp"
// #include "combination/combination.hpp"
// #include "iterator/iterator.hpp"
// #include "singleton/singleton.hpp"
// #include "bridge/bridge.hpp"
// #include "command/command.hpp"
// #include "CoR/cor.hpp"
// #include "mediator/mediator.hpp"
#include "flyweight/flyweight.hpp"

// void static_factory_test();
// void strategy_test();
// void decorate_test();
// void proxy_test();
// void factory_test();
// void prototype_test();
// void template_method_test();
// void facade_test();
// void builder_test();
// void observer_test();
// void state_test();
// void abstract_factory_test();
// void adapter_test();
// void memento_test();
// void combination_test();
// void iterator_test();
// void singleton_test();
// void bridge_test();
// void command_test();
// void cor_test();
// void mediator_test();
void flyweight_test();

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
    // observer_test();
    // state_test();
    // abstract_factory_test();
    // adapter_test();
    // memento_test();
    // combination_test();
    // iterator_test();
    // singleton_test();
    // bridge_test();
    // command_test();
    // cor_test();
    // mediator_test();
    flyweight_test();
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

void state_test() {
    context c(new concrete_state_A());
    c.request();
    c.request();
    c.request();
}

void abstract_factory_test() {
    char symbol1, symbol2;
    std::cout << "Input \'1\' or \'2\' for abstract factory:";
    std::cin >> symbol1;
    std::cout << "Input \'a\' or \'b\' for product:";
    std::cin >> symbol2;
    if(symbol1 == '1') {
        concrete_factory_1 cf1;
        if(symbol2 == 'a')
            cf1.create_productA()->operation();
        else
            cf1.create_productB()->operation();
    } else if(symbol1 == '2'){
        concrete_factory_2 cf2;
        if(symbol2 == 'a')
            cf2.create_productA()->operation();
        else
            cf2.create_productB()->operation();
    }
}

void adapter_test() {
    adapter().method();
}

void memento_test() {
    subject s("State 1");
    s.create_memento();
    s.print_state();
    care_taker c;
    c.set_memento(s.create_memento());
    s.change_state();
    s.print_state();
    s.recover_state(c.get_memento());
    s.print_state();
}

void combination_test() {
    composite root("root");
    int n;
    std::cout << "Input children' number: ";
    std::cin >> n;
    while(n--) {
        composite* s = new composite("child "+std::to_string(n));
        root.add(s);
        s->add(new leaf("leaf"));
        s->method();
    }
    root.method();
}

void iterator_test() {
    concrete_subject<int> cs({0,1,2,3,4,5,6,7,8});
    auto it = cs.create_iterator();
    while(!it->is_done()) {
        std::cout << it->current() << " ";
        it->next();
    }
    std::cout << std::endl;
}

void singleton_test() {
    std::string str;
    std::cout << "Input a string for singleton construct:";
    std::cin >> str;
    singleton::create_instance(str);
}

void bridge_test() {
    concrete_implementor ci;
    redefined_abstraction ra(&ci);
    ra.operation();
}

void command_test() {
    receiver r;
    concrete_command c(&r);
    invoker i(&c);
    i.excute_cmd();
}

void cor_test() {
    concrete_handler2 ch2(nullptr);
    concrete_handler1 ch1(&ch2);
    int f;
    std::cout << "Input a number for handlers(>40 for handler1):";
    std::cin >> f;
    ch1.handle(f);
}

void mediator_test() {
    concrete_mediator m;
    concrete_colleague1 cc1(&m);
    concrete_colleague2 cc2(&m);
    m.set_colleagues(&cc1, &cc2);
    cc1.send_msg("T-72A");
    cc2.send_msg("T-80U");
}
*/

void flyweight_test() {
    char flag;
    std::cout << "Is need an unshared flyweight?(y/n)" << std::endl;
    std::cin >> flag;
    unsigned int n, i;
    std::cout << "Input number of flyweights:" << std::endl;
    std::cin >> n;
    std::cout << "Input which flyweight is needed by index:" << std::endl;
    std::cin >> i;
    auto f = flyweight_factory(n).get_flyweight(i, flag == 'y');
    f->operation("Outside state");
}

