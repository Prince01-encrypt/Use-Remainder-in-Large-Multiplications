#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin >> t;
  
    while(t--) {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool check = false;
        int remain = 1;

        for(int i = 0; i < n; i++) {
            remain = remain * arr[i] % k;

            if(!remain) {
                cout << "yes\n";
                check = true;
                break;
            }
        }
        if(!check) {
            cout << "no\n";
        }
        delete[] arr;     
    }

    return 0;
}
