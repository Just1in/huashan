
#ifndef __PIG_H__
#define __PIG_H__

#include"animal.h"

class Pig:public Animal{
public:
    Pig(const std::string&n,const int &a,const int &w)
    :Animal(n,a),weight(w){}
    virtual ~Pig(){}
    void cryVoice();
private:
    int weight;
};

#endif