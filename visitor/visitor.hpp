#ifndef VISITOR
#define VISITOR

#include <vector>
#include <iostream>
#include <algorithm>

class concrete_element_A;
class concrete_element_B;

class visitor {
public:
    virtual ~visitor() {}
    virtual void visit_elem_A(concrete_element_A*) = 0;
    virtual void visit_elem_B(concrete_element_B*) = 0;
};

class concrete_visitor : public visitor {
public:
    virtual void visit_elem_A(concrete_element_A*) override;
    virtual void visit_elem_B(concrete_element_B*) override;
};

class element {
public:
    virtual ~element() {}
    virtual void accept(visitor*) = 0;
};

class concrete_element_A : public element {
public:
    virtual void accept(visitor*) override;
};

class concrete_element_B : public element {
public:
    virtual void accept(visitor*) override;
};

class object {
private:
    std::vector<element*> _elements;

public:
    ~object();
    void add(element*);
    void del(element*);
    void accept(visitor*);
};

#endif

