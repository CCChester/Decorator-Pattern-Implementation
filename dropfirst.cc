#include "dropfirst.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*********** setSource **********
     Purpose: Definition
     Returns: NULL
 ***********************************/

void DropFirst::setSource(std::istream * inp){
    p.setSource(inp);
}

/*********** fail **********
     Purpose: Definition
     Returns: NULL
 ***********************************/

bool DropFirst::fail() const{
    return p.fail();
}

/*********** ~DropFirst **********
     Purpose: destructor
     Returns: NULL
 ***********************************/

DropFirst::~DropFirst(){}

/*********** DropFirst **********
      Purpose: drop the num of character.
      Returns: string str.
 ***********************************/
string DropFirst::getWord(){
    string str;
    //get the string
    str = p.getWord();
    //if the string length is less of
    // equal than num
    if (str.length() <= num){
        return getWord();
    }
    //else
    else{
        string temp = str;
        int index = 0;
        //loop to check every single letter
        while (index < temp.length()){
            if (temp[index] == '\n'){
                temp = temp.substr(1+index) + "\n" + temp.substr(1+index+num);
            }
            index++;
        }//while
        str = temp.substr(num);
    }//else
    return str;
}
