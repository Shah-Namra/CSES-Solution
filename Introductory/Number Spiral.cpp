// find out the number in row y and col x
// 1 2 9 10 25 26 49 50 81 82
// 3 8 11 24 27 48 51 80 83
// 4 7 12 23 28 47 52 79 84
// 5 6 13 22 29 46 53 78 85
// 14 21 30 45 54 77 86
// 15 20 31 44 55 76 87
// 16 19 32 43 56 75 88     
// 17 18 33 42 57 74 89

#include <iostream>
#include <cmath>
using namespace std;
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        long long y, x;
        cin >> y >> x;
        long long result;

        if (x > y) {
            if (x % 2 == 0) 
                result = (x - 1) * (x - 1) + y;
            else 
                result = (x*x) - (y - 1);
            
        } 
        else {
            if (y % 2 == 1) 
                result = (y - 1)*(y - 1) + x;
             else 
                result = (y*y) - (x - 1);
            
        }
        
        cout << result << endl;
    }
    return 0;
}
