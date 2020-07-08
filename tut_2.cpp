#include <iostream>
#include "template_function.h"

using namespace std;

int main(){

    cout << "Input three integer values : " << endl;
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;

    cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;
    
    cout << "Input three double values : " << endl;
    double double1, double2, double3;
    cin >> double1 >> double2 >> double3;

    cout << "The maximum double value is: " << maximum(double1, double2, double3) << endl;


    return 0;
}
