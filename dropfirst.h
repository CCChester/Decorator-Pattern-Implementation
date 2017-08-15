#ifndef __DROPFIRST__H_
#define __DROPFIRST__H_
#include <iostream>
#include "decorator.h"
#include "textprocess.h"

class DropFirst : public Decorator {
    int num; //integer
public:
    DropFirst(TextProcessor &p, int num): Decorator(p), num(num) {}  //ctor
    void setSource(std::istream *inp);
    std::string getWord();
    bool fail() const;  //if got fail state
    ~DropFirst();  //dtor
};
#endif
