#ifndef COMBINATION
#define COMBINATION

#include <set>
#include <string>
#include <iostream>
#include <algorithm>

class component {
protected:
    std::string _name;

public:
    component(const std::string& n) : _name(n) {}

    component(std::string&& n) : _name(n) {}

    virtual ~component() {}

    virtual void add(component* c) = 0;

    virtual void del(component* c) = 0; 

    virtual void method() = 0;

    virtual std::string get_name() const {
        return this->_name;
    }
};

class composite : public component {
private:
    std::set<component*> _child;

public:
    composite(const std::string& n) : component(n) {}

    composite(std::string&& n) : component(n) {}

    ~composite() {
        std::for_each(this->_child.begin(), this->_child.end(), 
                      [](component* c)->void {
                          if(c) {
                            delete c;
                            c = nullptr;
                          }
                      }
                     ); 
    }

    virtual void add(component* c) override {
        this->_child.insert(c);
    }

    virtual void del(component* c) override {
        this->_child.erase(this->_child.find(c));
    } 

    virtual void method() override {
        std::cout << this->_name << "--"; 
        for(auto it = this->_child.cbegin(); it != this->_child.cend(); ++it) 
            std::cout << (*it)->get_name() << "#";
        std::cout << std::endl; 
    }
};

class leaf : public component {
public:
    leaf(const std::string& n) : component(n) {}

    leaf(std::string&& n) : component(n) {}

    virtual void add(component* c) override {
        return;
    }

    virtual void del(component* c) override {
        return;
    }

    virtual void method() override {
        std::cout << "Leaf: " << this->get_name() << std::endl; 
    }
};

#endif
