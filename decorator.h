#ifndef __DECORATOR__H_
#define __DECORATOR__H_
#include <iostream>
#include "textprocess.h"

using namespace std;
//class Decorator;
class Decorator:public TextProcessor {

protected:
    TextProcessor &p;  //a pointer p to the TextProcessor

public:
    Decorator(TextProcessor &p): p(p) {}  //ctor
    virtual ~Decorator();   //dtor
};
#endif
