#pragma once
class Euler
{
private:
	int num_iterations; // counter for the iteration number
	int max_iterations; //predetermined maximum number of iterations
	double result; // result variable to store y(predicted) at each step
	double* values; // pointer to a double, this will be used in the no-args constructor
	double h; //step size
	double x_0; //initial x value
	double y_0; //initial y value
public:
	Euler(); //Constructor
	~Euler(); //Destructor
	void Euler_implementation(double f(double x, double y)); //Euler method implementation
	void set_h(double size); // this method sets the size of h
	void set_conditions(double x, double y); //this method sets our x_0 & y_0 from a provided x & y
	void set_max_iterations(double h); //this method calculates the max_iterations based on a final x value, and h
};

