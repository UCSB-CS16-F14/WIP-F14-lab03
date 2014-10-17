// multiply.c   P.Conrad for CS16,  10/15/2009
// Multiply two integers, command line version

// We would not normally need a program to multiply two integers--
//   a calculator or pencil/paper would do.   
// This is just a simple sample program to illustrate some techniques.

// This program illustrates these concepts:
//   Getting input of two integers from command line
//   Calculation using a function with two params, returning an int
//   Use of function prototypes

// Header files

#include <iostream>
#include <cstdlib> // for atoi function
using namespace std;

// Function prototypes---header of function followed by semicolon

int product(int a, int b);

// main function

int main(int argc, char * argv[])
{
  // declare variables

  int num1, num2;

  // check command line args

  if (argc!=3)   // 3 = program name, num1, num2
    {
      // argv[0] is the name of the program (what we type to run it)
      cerr << "Usage: " << argv[0] << " num1 num2" << endl;
      cerr << " Calculates product of num1 and num2" << endl;
      exit(1);
    }
  
  // convert arguments from strings (char *) to int variables
  // atoi means "ascii to int", and it comes from <cstdlib>

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  // Calculate and print result
  // Yes, its overkill to use a function call instead of just typing
  //     cout << (num1 * num2) << endl;
  // but the point here is to learn how to use functions with a simple example

  cout << product(num1,num2) << endl;

  return 0; // indicates successful completion of main
}


// return the product of two integers, a times b
 
int product(int a, int b)
{
  return a * b;
}
