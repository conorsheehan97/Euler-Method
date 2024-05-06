#include "Euler.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cmath>

Euler::Euler() : max_iterations{ 100 }, num_iterations{ 0 }, x_0{ 0 }, y_0{ 1 }, h{ 0.01 }
{
	/* Here, we assign default values to the above attributes using an initialization list. 
	 Based on our default function, these x_0 & y_0 values are known beforehand to be correct
	 We then dynamically create an array of size 100 on the heap during runtime. 
	*/
	values = new double[max_iterations];
}

Euler::~Euler()
{
	//To avoid memory leaks, when the destructor is called, the dynamic array must be cast asunder
	delete[] values;
}


void Euler::Euler_implementation(double f(double x, double y))
{
	//This is our actual implementation of the Euler method
	double x0{ x_0 }; //redefining our x0 & y0 as local variables for this method.
	double y0{ y_0 };
	double y1{y_0};
	// Creating Vectors, in place of Arrays to store values. # of values depends on h, and x-interval
	// so need a dynamic data structure
	std::vector <double> Euler_y;
	std::vector <double> Euler_x;
	// Open a file for writing
	std::ofstream outFile("Euler_data.txt");
	if (outFile.is_open())
	{
		for (int i = 0; i < max_iterations; ++i)
		{
			Euler_x.push_back(x0);
			Euler_y.push_back(y1);
			//Our actual Euler implementation
			y1 = y0 + h * f(x0, y0);
			y0 = y1;
			x0 += h;
			//Here we're saving our data to a text file, so we can graph it in Python using Matplotlib
			outFile << Euler_x[i] << "\t" << Euler_y[i] << std::endl;
			std::cout << "f(" << Euler_x[i] << ") = " << Euler_y[i] << std::endl;
		}
		// Close the file
		outFile.close();
		std::cout << "Vector data saved to Euler_data.txt" << std::endl;
	}
}

void Euler::set_h(double size)
{
	/*Here we set h.Include a > 0 to be safe, and we also want to keep h < 1.
	Eulers method is more accurate the smaller the step size, hence the < 1 requirement. 
	*/
	if (size > 0 && size < 1)
	{
		h = size;
	}
}

void Euler::set_max_iterations(double max_x)
{
	// Setting the max iterations for the Euler for loop based on h, and x axis interval
	max_iterations = ((max_x - x_0) / h);
}

void Euler::set_conditions(double x, double y)
{
	// Allowing the user to set the initial x and y values

	x_0 = x;
	y_0 = y;
}
