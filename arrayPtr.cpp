#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

void DoubleArray(int* array, int size);


int main(){

    int array[] = {1,2,3,4,5,6,7,8};

    DoubleArray(array, 8);
    for(int i = 0; i < 8; ++i){
        cout << " Array " <<  array[i] << endl;
    }

    return 0;
}

//Functions

void DoubleArray(int* array, int size) {
    for (int i = 0; i < size; ++i) {
    array[i] = array[i] * 2;
}
}