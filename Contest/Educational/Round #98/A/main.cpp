#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,x,y;

    cin >> t;

    for(int i = 0; i < t;i++) {
        cin >> x >> y;

        if(x<y) {
            cout << y*2-1 << endl;
        }
        else if(x>y) {
            cout << x*2-1 << endl;
        }
        else {
            cout << x+y << endl;
        }
    }

    return 0;
}
