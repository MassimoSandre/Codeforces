#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,uni,mx;
    cin >>t;
    for(int i = 0; i < t;i++) {
        cin >> n;
        vector<int> v(n);
        vector<int> a(n+1,0);
        mx=-1;
        uni=0;
        for(int i = 0; i < n;i++) {
            cin >> v[i];
            if(a[v[i]]==0) {
                uni++;

            }
            a[v[i]]++;
            if(a[v[i]]>mx) mx = a[v[i]];

        }

        if(mx > uni) {
            cout << uni << endl;
        }
        else if(mx == uni) {
            cout << uni-1 << endl;
        }
        else {
            cout << mx << endl;
        }
    }
    return 0;
}
