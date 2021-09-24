#include "visitor.hpp"

void concrete_visitor::visit_elem_A(concrete_element_A* a) {
    std::cout << "Visit element A:" << a << std::endl; 
}

void concrete_visitor::visit_elem_B(concrete_element_B* b) {
    std::cout << "Visit element B:" << b << std::endl; 
}

void concrete_element_A::accept(visitor* v) {
    v->visit_elem_A(this);
}

void concrete_element_B::accept(visitor* v) {
    v->visit_elem_B(this);
}

object::~object() {
    std::for_each(_elements.begin(), _elements.end(), 
                  [](element* e)->void {
                    if(e) {
                        delete e;
                    }
                  }
                 );
}

void object::add(element* e) {
    _elements.push_back(e);
}

void object::del(element* e) {
    auto it = std::find(_elements.begin(), _elements.end(), e);
    if(it != _elements.end()) {
        element* t = *it;
        _elements.erase(it);
        delete t;
    }
}

void object::accept(visitor* v) {
    std::for_each(_elements.begin(), _elements.end(), 
                  [&](element* e)->void {
                    e->accept(v);
                  }
                 );
}

