// starL.cpp   A demonstration of ASCII Art printing L characters
// P. Conrad for CS16, Fall 2014, UCSB

// A C++ function that returns a string that, when printed on cout,
// renders the letter L with stars as ASCII art, 
// at any width or height, provided both width and height are >= 2
// If either is less than 2, the function should return an empty string.

// When both width and height are >=2, the length of the result string
// should be (width + 1) * height (where the +1 is for the \n).    

// Examples:

// starL(3,4) returns "*  \n*  \n*  \n***\n" which prints as:
// *
// *
// *
// ***
// starL(5,3) returns "*    \n*    \n*****\n" which prints as:
// *
// *
// *****
//
// Note that the trailing spaces on each line are REQUIRED
// for the function to be considered correct.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string starL(int width, int height)
{

  string result="";
  // check if parameters are valid
  if ((width<2) || (height < 2))
    return result;  // return without printing anything
  
  // add the first height-1 rows that are a single star
  // followed by width-1 spaces, then a \n
  for (int row=1; row<=height-1; row++) {
    result += "*";
    for (int col=2; col<=width; col++) {
      result += " ";
    }
    result += "\n";
  }

  // add the final row of width stars
  
  for (int col=1; col<=width; col++) {
    result += "*";
  }
  
  result += "\n";
  
  return result;   
}

// main program to illustrate output from starL

int main(int argc, char *argv[])
{
  int width, height;
  
  if (argc!=3)
    {
      cerr << "Usage: " << argv[0] << " width height" << endl;
      exit(1);
    }

  width = atoi(argv[1]);
  height = atoi(argv[2]);

  // call the function

  cout << starL(width,height) << flush;

  return 0;
}
