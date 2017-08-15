#ifndef __ALLCAPS_H__
#define __ALLCAPS_H__
#include <iostream>
#include <string>
#include "decorator.h"
#include "textprocess.h"

//class AllCaps;
class AllCaps : public Decorator {  //inherite
    public:
        AllCaps(TextProcessor &p): Decorator(p) {}  //ctor
        void setSource(std::istream *inp);
        std::string getWord();
        bool fail() const;   //if fail
};
#endif
