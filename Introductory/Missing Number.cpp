// find the missing number between 1 to n in an array of n-1 elements
#include <iostream>
using namespace std;
#include <algorithm>


int main (){
    int n; 
    cin >> n;
    // int arr[n-1];
    // for(int i = 0; i < n-1; i++){
    //     cin >> arr[i];
    // }
    // sort(arr, arr + n-1);

    // for(int i = 0; i<n-1; i++){
    //     if(arr[i] != i+1){
    //         cout << i+1;
    //         break;
    //     }
    // }
    // return 0;
    int arr[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n-1);
    
    // Check for the missing number
    for (int i = 0; i < n-1; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n << endl;    
    return 0;

}