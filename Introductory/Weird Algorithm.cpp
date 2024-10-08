// if no. is even divide by 2 else multiply by 3 and add 1
// Collatz conjecture algorithm
#include <iostream>
using namespace std;


int main(){
    long long n;
    cin >> n;
    cout << n << " ";
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }else{
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}
