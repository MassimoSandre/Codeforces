#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t;i++) {
        uint64_t n, w;
        cin >> n >> w;
        vector<int> v(n);
        for(int j = 0; j < n;j++) {
            cin >> v[j];
        }
        sort(v.begin(),v.end());
    }
    return 0;
}
