#ifndef __COUNT__h_
#define __COUNT__h_
#include <iostream>
#include <string>
#include "decorator.h"
#include "textprocess.h"

class Count: public Decorator{
    char c;  // initial a char
    int up;  //accumulative number
public:
    Count(TextProcessor &p, char c): Decorator(p),c(c), up(1) {}  //ctor
    void setSource(std::istream *inp);
    std::string getWord();
    bool fail() const;  //if got fail state
};
#endif
