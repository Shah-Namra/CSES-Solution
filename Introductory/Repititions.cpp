

//  maximum-length substring containing only one type of character
#include <iostream>
using namespace std;


int main(){
    string s;
    cin >> s;
    int n = s.length();
    int max_rep = 0;
    int i = 0;
    
    while (i < n) {
        char current = s[i];
        int j = i + 1;
        while (j < n && s[j] == current) {
            j++;
        }
        max_rep = max(max_rep, j - i);
        i = j;
    }
    
    cout << max_rep << endl;
    
    return 0;
        
}