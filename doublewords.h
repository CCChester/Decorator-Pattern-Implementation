#ifndef __DOUBLEWORDS__H_
#define __DOUBLEWORDS__H_
#include <iostream>
#include "decorator.h"
#include "textprocess.h"

//class Doublewords
class DoubleWords : public Decorator {

public:
    DoubleWords(TextProcessor &p): Decorator(p) {}  //ctor
    void setSource(std::istream *inp);
    std::string getWord();
    bool fail()const;  //if got fail state
};
#endif
