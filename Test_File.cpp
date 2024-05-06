#include <iostream>
#include <iomanip>
#include "Euler.h"

double func_A(double x, double y)
{
	return x + y + x * y;
}


using namespace std;

int main()
{
	//Setting up our Euler object, based on the above function
	Euler e;
	e.set_conditions(0,1);
	e.set_h(0.001);
	e.set_max_iterations(1);
	cout << " f(x,y) = x+y x*y" << endl;
	e.Euler_implementation(func_A);
	return 0;
}