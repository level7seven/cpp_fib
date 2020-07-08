#include <cstdio>
#include <iostream>

using namespace std;

int square(int x){
    cout << "square of integer : " << x << endl;
    return x * x;
}

double square(double y){
    cout << "square of double : " << y << endl;
    return y * y;
}

void nothing1(int a, float b, char c, int& d){

}

int nothing2(char a, int b, float& c, double& d){
    return 0;
}

int main () {

//   int gettysburg { 3 };
//   int * gettysburg_address = &gettysburg; 
//   cout << "Wartosc zmiennej gettysburg : " << gettysburg << endl;
//   cout << " Adres zmiennej wskaznikowej : " << &gettysburg_address << endl;
//   cout << " Adres zmiennej przechowywanej przez wskaznik : " << &gettysburg << endl;
//   * gettysburg_address = 17325; 
//  cout << " Wartosc zmiennej przechowywanej przez wskaznik : " << *gettysburg_address << endl;

    cout << square(7) << endl;
    cout << square(7.5) << endl;


};