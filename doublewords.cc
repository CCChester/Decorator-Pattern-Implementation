#include "doublewords.h"
#include <iostream>
#include <string>

using namespace std;

/*********** setSource **********
     Purpose: Definition
     Returns: NULL
 ***********************************/

void DoubleWords::setSource(std::istream *inp){
    p.setSource(inp);
}

/*********** fail **********
     Purpose: Definition
     Returns: NULL
 ***********************************/

bool DoubleWords::fail() const{
    return p.fail();
}

/*********** DoubleWords **********
     Purpose: Double the string.
     Returns: string newstr.
 ***********************************/

string DoubleWords::getWord(){
    //get the string/
    string str;
    str = p.getWord();
    //mystr1
    string mystr1 = str;
    //mystr2
    string mystr2 = str;
    string newstr;
    //let newstr that add them together
    newstr = mystr1 + "\n" + mystr2;
    return newstr;
}
