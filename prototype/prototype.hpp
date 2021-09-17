#ifndef PROTOTYPE
#define PROTOTYPE

#include <memory>
#include <utility>
#include <iostream>

class prototype {
protected:
    prototype() {}

public:
    virtual ~prototype() {}

    virtual std::shared_ptr<prototype> clone() = 0;
};

class shallow_clone : public prototype {
private:
    shallow_clone(shallow_clone&& sc) {
        std::cout << "Shallow clone through move constructor." << std::endl;
    }

public:
    shallow_clone() {}

    virtual std::shared_ptr<prototype> clone() {
        return std::shared_ptr<prototype>(new shallow_clone(std::move(*this)));
    }
};

class deep_clone : public prototype {
private:
    deep_clone(const deep_clone& dc) {
        std::cout << "Deep clone through copy constructor." << std::endl;
    }

public:
    deep_clone() {}

    virtual std::shared_ptr<prototype> clone() {
        return std::shared_ptr<prototype>(new deep_clone(*this));
    }
};

#endif

