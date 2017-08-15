#include "count.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*********** setSource **********
    Purpose: Definition
    Returns: NULL;
 ***********************************/
void Count::setSource(istream *inp){
    p.setSource(inp);
}

/*********** fail **********
    Purpose: Definition
    Returns: NULL;
 ***********************************/
bool Count::fail() const{
    return p.fail();
}

/*********** getword **********
     Purpose: count the character 
           which the string have.
     Returns: string str.
 ***********************************/
string Count::getWord(){
    //get the string
    string str;
    str = p.getWord();
    //let w be a empty string.
    string w = "";
    for(int pos = 0; str[pos]; pos++){
        //loop to string append
        string convert;
        stringstream mystr;
        mystr << up;
        //convert int to a string of int
        mystr >> convert;
        if (str[pos] == c){
            //if char equal to c
            w = w + convert; //then append this string of int
            w = w + convert; //then append this string of int
            up++;
        }
        else{ //append normally
            w = w + str[pos];
        }
    } //for
    return w;
}
