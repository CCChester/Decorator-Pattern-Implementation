#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
#include "allcaps.h"
#include "doublewords.h"
#include "dropfirst.h"
#include "count.h"
#include "textprocess.h"
#include "echo.h"

int main () {
  cin.exceptions(ios::failbit|ios::eofbit);
  string s;
  try {  //open the try block
    while(1) {
      getline(cin,s);
      istringstream iss{s};
      iss.exceptions(ios::failbit);
      string fname;
      iss >> fname;
      istream *in = (fname == "stdin") ? &cin : new ifstream(fname.c_str());
      in->exceptions(ios::failbit|ios::eofbit);
      TextProcessor *tp = new Echo;
      string dec;
      try {
        while (true) {
          iss >> dec;
          if (dec == "dropfirst") {
            int n;
            iss >> n;
            tp  = new DropFirst(*tp, n);   //call dropfirst function
          }
          else if (dec == "doublewords") {
            tp = new DoubleWords(*tp);    //call DoubleWords function
          }
          else if (dec == "allcaps") {
            tp = new AllCaps(*tp);       //call Allcaps function
          }
          else if (dec == "count") {
            char c;
            iss >> c;
            tp = new Count(*tp, c);     //call Count function
          }
        }
      }//try
      catch (ios::failure) {}
      tp->setSource(in);
      string word;
      try {
        while (true) {
          word = tp->getWord();
          cout << word << endl;
        }
      }
      catch (ios::failure) {}
      if (in != &cin) delete in;
      delete tp;
    }//while
  }
  catch (ios::failure) {}
}//end
