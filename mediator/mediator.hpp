#ifndef MEDIATOR
#define MEDIATOR

#include <string>
#include <utility>
#include <iostream>

class colleague;

class mediator {
public:
    virtual ~mediator() {}
    virtual void send_msg(const std::string&, colleague*) = 0;
    virtual void send_msg(std::string&&, colleague*) = 0;
};

class colleague {
protected:
    mediator* _m;

public:
    colleague(mediator*);
    virtual ~colleague() {}
    virtual void send_msg(const std::string&);
    virtual void send_msg(std::string&&);
};

class concrete_colleague1 : public colleague {
public:
    concrete_colleague1(mediator*);
};

class concrete_colleague2 : public colleague {
public:
    concrete_colleague2(mediator*);
};

class concrete_mediator : public mediator {
private:
    concrete_colleague1* _cc1;
    concrete_colleague2* _cc2;

public:
    void set_colleagues(concrete_colleague1*, concrete_colleague2*);
    virtual void send_msg(const std::string&, colleague*) override;
    virtual void send_msg(std::string&&, colleague*) override;
};

#endif

