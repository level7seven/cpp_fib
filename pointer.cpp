#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;


// function prototype

void assignAge3(int* pAge);



 
int main() {

    // pointers 

    int myAge  = 34;
    int* pAge = NULL;

    pAge = &myAge;

    cout << " Adres zmiennej przechowywanej przez wskaznik : " << pAge << endl;
    cout << " Wartosc zmiennej przechowywanej przez wskaznik : " << *pAge << endl;

    cout << " Adres zmiennej wskaznikowej : " << &pAge << endl;
    cout << " wartosc zmiennej myAge : " << myAge << endl;


    // array pointers

    int intArray[] = {1,2,3,4};
    int* ptrArray = intArray;

    cout << "1st : " << *ptrArray << endl << "Adres : " << ptrArray << endl;
    
    ptrArray++;

    cout << "2nd : " << *ptrArray << endl << "Adres : " << ptrArray << endl;

    ptrArray--;

    cout << "1st : " << *ptrArray << endl << "Adres : " << ptrArray << endl;

    // pass pointer to a function

    int age = 43;
    assignAge3(&age);
    cout << "pointer age: " << age << "\n" << endl;

}


//Functions

void assignAge3(int *pAge){
    *pAge = 22;
}