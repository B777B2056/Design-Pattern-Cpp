#include "state.hpp"

context::context(state* s) : _s(s) {

}

void context::request() {
    _s->handle(*this);
}

concrete_state_A::concrete_state_A() : _inner_state("State A") {
    std::cout << this->_inner_state << std::endl;
}

void concrete_state_A::handle(context& c) {
    c._s = std::shared_ptr<state>(new concrete_state_B());
}

concrete_state_B::concrete_state_B() : _inner_state("State B") {
    std::cout << this->_inner_state << std::endl;
}

void concrete_state_B::handle(context& c) {
    c._s = std::shared_ptr<state>(new concrete_state_A());
}

