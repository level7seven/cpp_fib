#include <iostream>
#include <iomanip>

using namespace std;


long fib(long number);

int main(){
    
    for(int counter {0}; counter <= 10; counter++){
        cout << "fibonacci(" << counter << ") = " << fib(counter) << endl;
    }
    
    return 0;
}

long fib(long number){
    if ((0 == number) || (1 == number)) {
        return 1;
    } else { 
        return fib(number - 1) + fib(number - 2);
    }

}