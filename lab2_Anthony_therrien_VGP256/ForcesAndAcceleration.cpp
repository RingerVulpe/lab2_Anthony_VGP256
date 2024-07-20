#include "ForcesAndAcceleration.h"
#include <iostream>

using namespace std;

Vector2D::Vector2D() : x(0.0), y(0.0) {}

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

Vector2D calculate_acceleration(double weight, const Vector2D& forces) {
    double net_force_x = forces.x;
    double net_force_y = forces.y - weight;

    double acceleration_x = net_force_x / weight;
    double acceleration_y = net_force_y / weight;

    return Vector2D(acceleration_x, acceleration_y);
}

void forces_and_acceleration_program() {
    double weight;
    Vector2D forces;

    cout << "Enter the weight of the object (in N): ";
    cin >> weight;

    cout << "Enter the forces acting on the object (in N, separate x and y components): ";
    cin >> forces.x >> forces.y;

    Vector2D acceleration = calculate_acceleration(weight, forces);

    cout << "Acceleration (x, y): (" << acceleration.x << ", " << acceleration.y << ") m/s^2" << endl;
}
