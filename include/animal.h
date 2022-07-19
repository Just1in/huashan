#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include<string>
#include<iostream>

class Animal{
public:
    Animal(const std::string&n,const int &a):name(n),age(a){}
    virtual ~Animal(){}
    virtual void cryVoice() = 0;

protected:
    std::string name;
    int age;
};

#endif