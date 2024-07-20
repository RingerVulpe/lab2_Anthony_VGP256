#include <iostream>
#include "Polynomial.h"
#include "EquationsOfMotion.h"
#include "ForcesAndAcceleration.h"

using namespace std;

int main() 
{
    // Example usage of equations of motion functions
    double u = 10.0; // Initial velocity
    double a = 2.0;  // Acceleration
    double t = 5.0;  // Time

    int choice;

    cout << "Choose an option:\n";
    cout << "1. Polynomial Program\n";
    cout << "2. Equations of Motion Library\n";
    cout << "3. Forces and Acceleration Program\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
    case 1:
        polynomial_program();
        break;
    case 2:
        
        //input initial velocity, acceleration, and time
        cout << "Enter the initial velocity: ";
        cin >> u;
        cout << "Enter the acceleration: ";
        cin >> a;
        cout << "Enter the time: ";
        cin >> t;

        cout << "Final Velocity: " << final_velocity(u, a, t) << endl;
        cout << "Displacement: " << displacement(u, a, t) << endl;
        break;
    case 3:
        forces_and_acceleration_program();
        break;
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
