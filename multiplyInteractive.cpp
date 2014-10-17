// multiplyInteractive.c   P.Conrad for CS16,  10/16/2014
// Multiply two integers, interactive version

// We would not normally need a program to multiply two integers--
//   a calculator or pencil/paper would do.   
// This is just a simple sample program to illustrate some techniques.

// Header files

#include <iostream>
using namespace std; // see what happens if you comment this out...

// Function prototypes---header of function followed by semicolon

int product(int a, int b);

// main function
int main()
{
  // declare variables

  int num1, num2;

  cout << "Please enter num1: ";
  cin >> num1;

  cout << "Please enter num2: ";
  cin >> num2;
  
  // Calculate and print result
  // Yes, its overkill to use a function call instead of just typing
  //     printf("%i\n", num1 * num2 );
  // but the point here is to learn how to use functions with a simple example

  cout << "product is: " << product(num1,num2) << endl;

  return 0; // indicates successful completion of main
}

// return the product of two integers, a times b
int product(int a, int b)
{
  return a * b;
}
