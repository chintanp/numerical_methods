// successive_subs.cpp : Defines the entry point for the console application.
//

// Header files for all the functionality you need
#include <iostream>
#include <conio.h>
#include <math.h>

// define a function here - this is a macro, there are several ways of doing this 
#define F(x) (-1 + pow(x, 2) + 2*pow(x, 0.05))/3

// The entry point for the application
int main () { 

	using namespace std;

	// Variables used 
	double tol = 1e-5; // tolerance for our answer
	double xguess = 0.1; // the initial guess 
	double Err = 1;  // Initial error estimate
	double xnew, xold;  // old and new values for the variable
	//xold = 0.1;
	xold = xguess;		// start the process with the guess

	while ( Err > tol ) {	// check if error is still higher that we can tolerate
		xnew = F(xold);		// Use the definition of our function here
		Err = abs(xnew - xold);		// Calculate the error
		xold = xnew;		// Substitute the old value with the new value
	}
	
	// Print the results
	printf("Error is : %lf \n", Err);
	printf("solution is : %lf", xold);

	getch();

	return 0;
}
