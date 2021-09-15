#ifndef STRATEGY
#define STRATEGY

#include <memory>
#include <iostream>

/* Abstract Strategy */
class strategy {
public:
    virtual void algorithm() = 0;
};

/* Concrete Strategy A */
class concrete_strategy_A : public strategy {
public:
    virtual void algorithm() {
        std::cout << "Algorithm A" << std::endl;
    }
};

/* Concrete Strategy B */
class concrete_strategy_B : public strategy {
public:
    virtual void algorithm() {
        std::cout << "Algorithm B" << std::endl;
    }
};

/* Context */
class context {
protected:
    // Context need to maintain a reference with Strategy
    std::unique_ptr<strategy> _s;

public:
    // Product a concrete strategy
    context(char flag) {
        strategy* s = nullptr;
        switch(flag) {
            case 'a':
                s = new concrete_strategy_A();
                break;
            case 'b':
                s = new concrete_strategy_B();
                break;
        }
        this->_s = std::unique_ptr<strategy>(s);
    }

    // Use the strategy to do something
    void do_something() {
        if(!this->_s)
            return;
        this->_s->algorithm();
    }
};

#endif
