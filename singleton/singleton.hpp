#ifndef SINGLETON
#define SINGLETON

#include <string>
#include <utility>
#include <iostream>

class singleton {
private:
    static singleton _s;
    
    singleton(const std::string& str) {
        std::cout << str << std::endl;
    }

    singleton(std::string&& str) {
        std::cout << str << std::endl;
    }

public:
    static singleton create_instance(const std::string& str) {
        return singleton(str);
    }

    static singleton create_instance(std::string&& str) {
        re singleton(std::move(str));
    }
};

#endif

