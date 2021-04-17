#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if(n == 1) return 0;
    int div = 2;
    while(n%div!=0&&div*div<=n) {
        div++;
    }
    if(div*div>n) {
        return 1+f(n-1);
    }
    else {
        return min(1+f(n-1),1+f(n/(n/div)));
    }

}

int main() {
    int t,n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << f(n) << endl;

    }

    return 0;
}
