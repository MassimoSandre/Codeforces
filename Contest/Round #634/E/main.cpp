#include <bits/stdc++.h>

using namespace std;

int f(vector<int>& v, int i, int j) {
    if(i == j) return 1;
    if(v[i] == v[j] && i == j-1) return 2;
    if(v[i] == v[j]) return f(v,i+1,j-1) + 2;

    return max(f(v,i,j-1),f(v,i+1,j));
}

int main() {
    int t,n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n;j++) {
            cin >> v[j];
        }
        cout << f(v,0,n-1)<<endl;
    }
    return 0;
}
