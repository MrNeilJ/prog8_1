// This program stores employee work hours in an int arry
#include <iostream>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 6;
    int hours [NUM_EMPLOYEES];  // HOLDS HOURS WORKED FOR 6 EMPLOYEES

    // Input the hours worked by each employee
    cout    << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
    cin     >> hours[0];
    cin     >> hours[1];
    cin     >> hours[2];
    cin     >> hours[3];
    cin     >> hours[4];
    cin     >> hours[5];
    return 0;
}