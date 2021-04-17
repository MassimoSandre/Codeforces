#include <bits/stdc++.h>

using namespace std;

int main() {
    int  t,n,temp;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<vector<int>> v(n);
        for(int i = 0; i < n;i++) {
            cin >> temp;
            v[temp-1].push_back(i);
        }


        int ris = INT_MAX;

        for(int i = 1; i <= n;i++ ) {
            temp = 0;

            for(int j = 0; j < v[i-1].size();j++) {
                if(j == 0) {
                    if(v[i-1][j]!=0)temp++;
                }
                if(j == (int)v[i-1].size()-1) {
                    if(v[i-1][(int)v[i-1].size()-1] != n-1) temp++;
                }
                else if(v[i-1][j+1]-v[i-1][j]>1) temp++;
            }
            if(v[i-1].size()!=0) ris = min(ris, temp);
        }

        cout << ris << endl;
    }
    return 0;
}
