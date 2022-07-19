#ifndef __FISH_H__
#define __FISH_H__
#include"animal.h"

class Fish:public Animal{
public:
    Fish(const std::string&n,const int &a,const std::string&s)
    :Animal(n,a),shape(s){}
    virtual ~Fish(){}
    void cryVoice();
private:
    std::string shape;
};

#endif