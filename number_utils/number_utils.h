#ifndef NUMBER_UTILS_H
#define NUMBER_UTILS_H

// Function to calculate the absolute value of a number
double abs(double number);

// Function to round a number to the nearest integer
int round_to_nearest(double number);

// Function to round a number up to the nearest integer
int ceil_to_nearest(double number);

// Function to round a number down to the nearest integer
int floor_to_nearest(double number);

// Function to generate a random floating-point number between 0 and 1
double random_double();

// Function to find the minimum of two numbers
double min(double num1, double num2);

// Function to find the maximum of two numbers
double max(double num1, double num2);

// Function to calculate the power of a number
double power(double base, double exponent);

// Function to calculate the square root of a number
double sqrt(double number);

// Function to calculate the sine of an angle in radians
double sin(double angle);

// Function to calculate the cosine of an angle in radians
double cos(double angle);

// Function to calculate the tangent of an angle in radians
double tan(double angle);

// Function to calculate the natural logarithm of a number
double log(double number);

// Function to calculate e raised to the power of a number
double exp(double number);

// Constant for the mathematical constant Pi
#define PI 3.14159265358979323846

// Constant for the mathematical constant e (Euler's number)
#define E 2.71828182845904523536

#endif
