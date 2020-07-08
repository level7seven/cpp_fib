#include <iostream>
#include <iomanip>

using namespace std;

long factorial(double number);

int main(){

    for(int counter{0}; counter <= 10; counter++){
        cout << setw(10) << counter << "! = " << factorial(counter) << endl;
    }

    return 0;
}

long factorial(double number){
    if(number <= 1){
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }

}