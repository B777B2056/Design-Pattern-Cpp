#ifndef FLYWEIGHT
#define FLYWEIGHT

#include <vector>
#include <string>
#include <memory>
#include <cassert>
#include <iostream>

class flyweight {
public:
    virtual ~flyweight() {}
    virtual void operation(std::string) = 0;
};

class concrete_flyweight : public flyweight {
public:
    virtual void operation(std::string s) override {
        std::cout << "Concrete flyweight " << s << std::endl;
    }
};

class unshared_flyweight : public flyweight {
public:
    virtual void operation(std::string s) override {
        std::cout << "Unshared flyweight " << s << std::endl;
    }
};

class flyweight_factory {
private:
    std::vector<std::shared_ptr<flyweight>> _flyweights;

public:
    flyweight_factory(unsigned int n) : _flyweights(n, nullptr) {}

    std::shared_ptr<flyweight> get_flyweight(unsigned int i, bool is_unshared) {
        assert(i < _flyweights.size());
        if(!_flyweights[i]) {
            flyweight* f = nullptr;
            if(is_unshared)
                f = new unshared_flyweight();
            else
                f = new concrete_flyweight();
            _flyweights[i] = std::shared_ptr<flyweight>(f);
        }
        return _flyweights[i];
    }
};

#endif

