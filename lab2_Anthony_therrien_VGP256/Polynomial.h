#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>

std::vector<double> derivative(const std::vector<double>& coeffs);
double evaluate(const std::vector<double>& coeffs, double x);
void polynomial_program();

#endif // POLYNOMIAL_H
