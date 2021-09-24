#ifndef INTERPRET
#define INTERPRET

#include <string>
#include <iostream>

class terminal_expression;
class nonterminal_expression;

class context {
private:
    std::string _input, _output;

public:
    context(const std::string& input) : _input(input) {}
    
    context(std::string&& input) : _input(input) {}
    
    std::string get_output() const {
        return this->_output;
    }
friend class terminal_expression;
friend class nonterminal_expression;
};

class abstract_expression {
public:
    virtual ~abstract_expression() {}
    virtual void interpret(context& c) = 0;
};

class terminal_expression : public abstract_expression {
public:
    virtual void interpret(context& c) override {
        c._output = "Terminal@2A46 125mm Cannon says: " + c._input;
    }
};

class nonterminal_expression : public abstract_expression {
public:
    virtual void interpret(context& c) override {
        c._output = "Non-terminal@2A46 125mm Cannon says: " + c._input;
    }
};

#endif

