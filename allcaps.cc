#include "allcaps.h"
#include <iostream>
#include <string>

using namespace std;

/*********** setSource **********
     Purpose: definition.
     Returns: NULL
 ***********************************/
void AllCaps::setSource(istream *inp){
    p.setSource(inp);
}

/*********** fail **********
     Purpose: definition.
     Returns: true or false
 ***********************************/
bool AllCaps::fail() const{
    return p.fail();
}

/*********** getWord **********
      Purpose: To get the string and then do
           changed to capital letter.
      Returns: String str.
 ***********************************/
string AllCaps::getWord(){
    string str;
    //get the string
    str = p.getWord();
    //compute the offset
    int distance = 'a' - 'A';
    for(int pos = 0; str[pos]; pos++){
        //loop to every single character.
        if(str[pos] >= 'a' && str[pos] <= 'z'){
            //if it is lower case
            str[pos] = str[pos] - distance;  //change to upper case
        }
    }//for
    return str;
}
