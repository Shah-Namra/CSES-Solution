#include <iostream>
#include <vector>
using namespace std;

void print(int n) {
    if (n == 1) {
        cout << "1" << endl;
    } 
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } 
    else {
        vector<int> ans;
        for (int i = 2; i <= n; i += 2) {
            ans.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            ans.push_back(i);
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}