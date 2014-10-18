// starL.cpp   A demonstration of ASCII Art printing L characters
// P. Conrad for CS16, Fall 2014, UCSB

// A C++ function that returns a string that, when printed on cout,
// renders the letter L with stars as ASCII art, 
// at any width or height, provided both width and height are >= 2
// If either is less than 2, the function should return an empty string.

// When both width and height are >=2, the length of the result string
// should be (width + 1) * height (where the +1 is for the \n).    

// For examples, see the test cases in main().

// Note that the trailing spaces on each line are REQUIRED
// for the function to be considered correct.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);


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


// Testing starL, Test-Driven Development style.

int main()
{

  string starL34Expected = 
    "*  \n"
    "*  \n"
    "*  \n"
    "***\n" ;

  assertEquals(starL34Expected,starL(3,4),"starL(3,4)");

  string starL43Expected = 
    "*   \n"
    "*   \n"
    "****\n" ;

  assertEquals(starL43Expected,starL(4,3),"star(4,3)");

  assertEquals("",starL(1,2),"starL(1,2)");
  assertEquals("",starL(2,1),"starL(2,1)");

  return 0;
}

void assertEquals(string expected, string actual, string message="") {
 
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }

}
