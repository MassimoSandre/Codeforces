#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t;i++){
        int n,m;
        cin >> n >> m;
        bool zero = false;
        bool dis = true;
        int sum = 0,temp,mn = INT_MAX;

        for(int j = 0; j < n;j++) {
            for(int k = 0; k < m;k++) {
                cin >> temp;

                if(temp == 0) zero = true;
                if(temp < 0) dis = !dis;
                mn = min(mn,abs(temp));
                sum += abs(temp);
            }
        }

        if(zero || dis) {
            cout << sum << endl;
        }
        else {
            cout << sum-2*mn << endl;
        }
    }
    return 0;
}
