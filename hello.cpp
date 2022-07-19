#include<iostream>
#include"fish.h"
#include"pig.h"

int main(){
    Animal*a1 = new Fish("鲫鱼",9,"长的"); 
    a1->cryVoice();
    Animal*a2 = new Pig("荷兰猪",12,300); 
    a2->cryVoice();
}