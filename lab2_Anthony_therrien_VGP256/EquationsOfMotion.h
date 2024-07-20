#ifndef EQUATIONS_OF_MOTION_H
#define EQUATIONS_OF_MOTION_H

double final_velocity(double initial_velocity, double acceleration, double time);
double displacement(double initial_velocity, double acceleration, double time);
double final_velocity_with_displacement(double initial_velocity, double displacement, double time);
double time_with_displacement(double initial_velocity, double displacement, double acceleration);
double acceleration_with_displacement(double initial_velocity, double displacement, double time);

#endif // EQUATIONS_OF_MOTION_H
