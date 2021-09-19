#ifndef OBSERVER
#define OBSERVER

#include <set>
#include <iostream>

class observer {
public:
    virtual ~observer() {}

    virtual void update() = 0;
};

class subject {
protected:
    std::set<observer*> _ov;

public:
    void add_observer(observer* o) {
        _ov.insert(o);
    }

    void del_observer(observer* o) {
        _ov.erase(_ov.find(o));
    }

    void notify() {
        for(auto& o : _ov) 
            o->update();
    }
};

class concrete_subject : public subject {
public:
    int subject_state;
};

class concrete_observer : public observer {
private:
    int _observer_state;

    concrete_subject* _s;

public:
    concrete_observer(concrete_subject* s) : _s(s) {}

    virtual void update() override {
        this->_observer_state = _s->subject_state;
        std::cout << "Observer's state is " << this->_observer_state << std::endl;
    }
};

#endif

