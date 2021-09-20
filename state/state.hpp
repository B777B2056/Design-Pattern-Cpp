#ifndef STATE
#define STATE

#include <string>
#include <memory>
#include <iostream>

class context;

class state {
public:
    virtual ~state() {}

    virtual void handle(context& c) = 0;
};

class concrete_state_A : public state {
private:
    std::string _inner_state;

public:
    concrete_state_A();

    virtual void handle(context& c) override;
};

class concrete_state_B : public state {
private:
    std::string _inner_state;

public:
    concrete_state_B();

    virtual void handle(context& c) override;
};

class context {
friend class concrete_state_A;
friend class concrete_state_B;

private:
    std::shared_ptr<state> _s;

public:
    context(state* s);

    void request();
};

#endif

