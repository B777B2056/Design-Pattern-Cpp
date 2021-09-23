#include "mediator.hpp"

colleague::colleague(mediator* m) : _m(m) {

}

void colleague::send_msg(const std::string& str) {
    _m->send_msg(str, this);
}

void colleague::send_msg(std::string&& str) {
    _m->send_msg(std::move(str), this);
}

concrete_colleague1::concrete_colleague1(mediator* m) : colleague(m) {

}

concrete_colleague2::concrete_colleague2(mediator* m) : colleague(m) {

}

void concrete_mediator::set_colleagues(concrete_colleague1* cc1, 
                                       concrete_colleague2* cc2) {
    _cc1 = cc1;
    _cc2 = cc2;
}

void concrete_mediator::send_msg(const std::string& str, colleague* c) {
    if(c == _cc1)
        std::cout << "Colleague 1: " << str << std::endl;
    else if(c == _cc2)
        std::cout << "Colleague 2: " << str << std::endl;
}

void concrete_mediator::send_msg(std::string&& str, colleague* c) {
    if(c == _cc1)
        std::cout << "Colleague 1: " << str << std::endl;
    else if(c == _cc2)
        std::cout << "Colleague 2: " << str << std::endl;
}

