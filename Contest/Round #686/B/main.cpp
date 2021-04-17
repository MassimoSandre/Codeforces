#include <bits/stdc++.h>

using namespace std;

int main() {
    int  t,n,val;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<pair<int,int>> v(n+1,make_pair(0,0));

        for(int i = 0; i < n;i++) {
            cin >> val;
            v[val].first++;
            v[val].second = i+1;
        }

        bool r = false;
        for(int i = 1; i < n+1;i++) {
            if(v[i].first==1) {
                cout << v[i].second << endl;
                r = true;
                break;
            }
        }
        if(!r) cout << "-1\n";
    }
    return 0;
}
