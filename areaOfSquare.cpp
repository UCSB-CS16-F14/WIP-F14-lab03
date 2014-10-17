// areaOfSquare.cpp   --- cmd line arg program to compute area of square
// P. Conrad for CS16, Fall 2014, UCSB CS Dept

// THIS IS NOT TYPICAL OF THE COMMENTS YOU SHOULD HAVE IN YOUR CODE
// IT IS WAY TOO MANY COMMENTS FOR TYPICAL CODE

// This program has comments that are meant to be part of the "lesson"
// comments that are teaching you about the code as you read it.

// This is one of a pair programs (along with computeAreaOfSquare.cpp) that 
// provide a constrast between getting input using cin and getting input
// from the command line.

// In this program, we are using "int" variables only---because we want
// to illustrate the technique with int variables first.    
// (Granted, for area of a square, a "double" variable would make more sense.)


// First we indicate that we need iostream and namespace std
// to get access to cout, cerr, endl

#include <iostream>
using namespace std;

// Then we #include cstdlib because we are using atoi
#include <cstdlib>

// Next we define a function to compute the area of a square (using ints)

int areaOfSquare(int sideLength) 
{
  return sideLength * sideLength;
}


// Next we have our main program that gets a value from the command line
// and then gives back the answer

int main(int argc, char *argv[])  // this is standard for cmd line arg programs
{
  int side;

  // check usage of program

  if (argc!=2) // two things on command line
    {
      // cerr is used for error messages instead of cout
      // argv[0] is the command used to invoke the program
      cerr << "Usage: " << argv[0] << " sideLength" << endl;
      exit(1); // stop program, signal error condition
    }

  // convert command line argument from char * (ASCII) to int
  side = atoi(argv[1]);

  // compute and print answer
  cout << "Side: " << side << " Area: " << areaOfSquare(side) << endl;
  return 0;
}
