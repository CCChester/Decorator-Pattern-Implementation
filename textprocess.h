#ifndef __TEXTPROCESS_H__
#define __TEXTPROCESS_H__
#include <iostream>
#include <string>

class TextProcessor {
  public:
    //all function must be virtual
    virtual void setSource(std::istream *inp) = 0;
    virtual std::string getWord() = 0;
    virtual ~TextProcessor();
    virtual bool fail() const = 0;
};
#endif
