#ifndef MEMENTO
#define MEMENTO

#include <string>
#include <utility>
#include <iostream>

class memento {
private:
    std::string _state;

public:
    void set_state(const std::string& s) {
        this->_state = s;
    }

    std::string get_state() const {
        return this->_state;
    }
};

class care_taker {
private:
    memento _m;

public:
    void set_memento(const memento& m) {
        this->_m = m;
    }

    void set_memento(memento&& m) {
        this->_m = std::move(m);
    }

    memento get_memento() const {
        return _m;
    }
};

class subject {
private:
    std::string _state;

public:
    subject(const std::string& init_s) : _state(init_s) {}
    
    void change_state() {
        ++(this->_state.back());
    }

    void print_state() const {
        std::cout << this->_state << std::endl;
    }

    memento create_memento() const {
        memento m;
        m.set_state(this->_state);
        return m;
    }

    void recover_state(const memento& m) {
        this->_state = m.get_state();
    }
};

#endif

