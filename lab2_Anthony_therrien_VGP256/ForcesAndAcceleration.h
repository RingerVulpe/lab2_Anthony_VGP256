#ifndef FORCES_AND_ACCELERATION_H
#define FORCES_AND_ACCELERATION_H

struct Vector2D {
    double x;
    double y;
    Vector2D();
    Vector2D(double x, double y);
};

Vector2D calculate_acceleration(double weight, const Vector2D& forces);
void forces_and_acceleration_program();

#endif // FORCES_AND_ACCELERATION_H
