#include "EquationsOfMotion.h"
#include <cmath>

double final_velocity(double initial_velocity, double acceleration, double time) 
{
    return initial_velocity + acceleration * time;
}

double displacement(double initial_velocity, double acceleration, double time) 
{
    return initial_velocity * time + 0.5 * acceleration * pow(time, 2);
}

double final_velocity_with_displacement(double initial_velocity, double displacement, double time) 
{
    return (2 * displacement / time) - initial_velocity;
}

double time_with_displacement(double initial_velocity, double displacement, double acceleration) 
{
    return sqrt((2 * displacement) / acceleration) - initial_velocity;
}

double acceleration_with_displacement(double initial_velocity, double displacement, double time) 
{
    return (2 * displacement - 2 * initial_velocity * time) / pow(time, 2);
}
