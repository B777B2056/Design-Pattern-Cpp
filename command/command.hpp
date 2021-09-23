#ifndef COMMAND
#define COMMAND

#include <iostream>

class receiver {
public:
    void operation() {
        std::cout << "Receiver" << std::endl;
    }
};

class command {
protected:
    receiver* _recver;

public:
    command(receiver* r) : _recver(r) {}
    virtual ~command() {}
    virtual void excute() = 0;
};

class concrete_command : public command {
public:
    concrete_command(receiver* r) : command(r) {}

    virtual void excute() override {
        _recver->operation();
    }
};

class invoker {
private:
    command* _cmd;

public:
    invoker(command* cmd) : _cmd(cmd) {}

    void excute_cmd() {
        _cmd->excute();
    }
};

#endif

