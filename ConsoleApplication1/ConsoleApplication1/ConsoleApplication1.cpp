#include "stdafx.h" // this header must be at the top of all cpp codeing done in visual studio for faster compliing and to help avoid errors unless doing multiplatform development this can be turned off
#include <iostream> // the input output stream 
using namespace std; // using this in the code allows us to not have to type STD:: in front of every line


int main()
{
	double 	x; // this is declaring that x is an integer which will later be defined 
	double y; // this is declaring a double variable of Y which will later be defined

	x = 2 * 142.98763; // this is showing that x is = to the math equation * meaning multiply
	y = x * 123.56176; // this line is to show that y is equal to the value of X times the double of 12.561
	double output = x + y; // this takes the totals for both x and y and puts them into a variable of "output"


	cout <<  output << endl; // this line tells the program to output just the 
	return 0;

}