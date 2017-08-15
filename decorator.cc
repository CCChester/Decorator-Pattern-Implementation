#include <iostream>
#include "decorator.h"
using namespace std;

/*********** Decorator **********
     Purpose: implement the destructor
     Returns: NULL
 ***********************************/
Decorator::~Decorator(){
    delete &p;
}
