#include "Polynomial.h"
#include <iostream>

using namespace std;

vector<double> derivative(const vector<double>& coeffs) {
    vector<double> derivative_coeffs(coeffs.size() - 1);
    for (int i = 1; i < coeffs.size(); ++i) {
        derivative_coeffs[i - 1] = coeffs[i] * i;
    }
    return derivative_coeffs;
}

double evaluate(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = coeffs.size() - 1; i >= 0; --i) {
        result = result * x + coeffs[i];
    }
    return result;
}

void polynomial_program() {
    int degree;
    cout << "Enter the degree of the polynomial (maximum 10): ";
    cin >> degree;

    vector<double> coeffs(degree + 1);
    cout << "Enter the coefficients of the polynomial from highest degree to lowest:\n";
    for (int i = degree; i >= 0; --i) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> coeffs[i];
    }

    double x;
    cout << "Enter the moment in time (x value): ";
    cin >> x;

    // Calculate velocity (first derivative)
    vector<double> velocity_coeffs = derivative(coeffs);
    double velocity = evaluate(velocity_coeffs, x);

    // Calculate acceleration (second derivative)
    vector<double> acceleration_coeffs = derivative(velocity_coeffs);
    double acceleration = evaluate(acceleration_coeffs, x);

    cout << "At x = " << x << " s:" << endl;
    cout << "Instantaneous Velocity: " << velocity << endl;
    cout << "Instantaneous Acceleration: " << acceleration << endl;
}
