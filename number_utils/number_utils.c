#include "number_utils.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

double abs(double number) {
    return fabs(number);
}

int round_to_nearest(double number) {
    return round(number);
}

int ceil_to_nearest(double number) {
    return ceil(number);
}

int floor_to_nearest(double number) {
    return floor(number);
}

double random_double() {
    srand(time(NULL));
    return (double)rand() / RAND_MAX;
}

double min(double num1, double num2) {
    return (num1 < num2) ? num1 : num2;
}

double max(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double sqrt(double number) {
    return sqrt(number);
}

double sin(double angle) {
    return sin(angle);
}

double cos(double angle) {
    return cos(angle);
}

double tan(double angle) {
    return tan(angle);
}

double log(double number) {
    return log(number);
}

double exp(double number) {
    return exp(number);
}
