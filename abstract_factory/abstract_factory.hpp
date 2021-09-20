#ifndef ABSTRACT_FACTORY
#define ABSTRACT_FACTORY

#include <memory>
#include <iostream>

class productA {
public:
    virtual ~productA() {}

    virtual void operation() = 0;
};

class productA1 : public productA {
public:
    virtual void operation() override;
};

class productA2 : public productA {
public:
    virtual void operation() override;
};

class productB {
public:
    virtual ~productB() {}

    virtual void operation() = 0;
};

class productB1 : public productB {
public:
    virtual void operation() override;
};

class productB2 : public productB {
public:
    virtual void operation() override;
};

class abstract_factory {
public:
    virtual ~abstract_factory() {}

    virtual std::shared_ptr<productA> create_productA() = 0;

    virtual std::shared_ptr<productB> create_productB() = 0;
};

class concrete_factory_1 : public abstract_factory {
public:
    virtual std::shared_ptr<productA> create_productA();

    virtual std::shared_ptr<productB> create_productB();
};

class concrete_factory_2 : public abstract_factory {
public:
    virtual std::shared_ptr<productA> create_productA();

    virtual std::shared_ptr<productB> create_productB();
};

#endif

