#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,a,b;
    char c;
    cin >> t;
    for(int i = 0; i < t;i++) {
        cin >> n >> a >> b;
        if(b == 1){
            c = 97;
            for(int j = 0; j < n;j++) {
                cout << c;
            }
        }
        else if(a == b || a==1) {
            for(int j = 0; j < n;j++) {
                c = 97 +(j%26);
                cout << c;
            }
        }
        else {
            int per = a - b + 1;
            int ot = a - per - 1;
            int k = 0;
            int letter = 0;
            while(k < n) {
                int old = k;
                for(;k < old+per&&k<n;k++) {
                    c = 97+(letter%26);
                    cout << c;
                }
                old = k;
                for(;k < old+ot&&k<n;k++) {
                    letter++;
                    c = 97 +(letter%26);
                    cout << c;
                }
                letter++;
            }
        }
        cout << endl;
    }
    return 0;
}
