# Euler-Method
This repository contains an implementation of the Euler method for approximating solutions to ordinary differential equations (ODEs). The project uses an object-oriented programming (OOP) approach to solve a single function and compare the result to the analytical solution.

## Contents
### C++ Files:
 - Euler.h: Class declaration.
 - Euler.cpp: Method implementation file.
 - Test_File.cpp: Test file to demonstrate the functionality.
### Python Jupyter Notebook: 
 - Used for plotting and comparing results.
### PDF Document: 
 - Euler_Method.pdf provides a mathematical and algorithmic description of the method.
## Project Overview
### Euler Method
The Euler method is a first-order numerical procedure for solving ODEs with a given initial value. It is the simplest and most basic explicit method for numerical integration of differential equations.

## Implementation Details
### Euler Class:
#### Attributes:
 - Interval width.
 - Initial value conditions.
#### Methods:
 - setIntervalWidth: Sets the width of the interval.
 - setInitialValues: Sets the initial value conditions.
 - calculateMaxIterations: Calculates the maximum number of iterations.
 - eulerImplementation: Implements the Euler method, prints the approximation value at each interval, and saves the results to a text file.

## Comparison:
The results are plotted using Python's Matplotlib library and compared to the analytical solution obtained using Wolfram Alpha's ODE solver.

## Dependencies
 - C++ Compiler: Any standard C++ compiler (e.g., g++).
 - Python:
 - - Matplotlib for plotting graphs.
 - - Jupyter Notebook for interactive analysis.

## Conclusion
This project provides an object-oriented implementation of the Euler method for approximating ODE solutions. The results are validated against the analytical solution obtained using Wolfram Alpha's ODE solver, offering a comprehensive understanding of the method's accuracy and application.
