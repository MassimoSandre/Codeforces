#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t;i++) {
        int n,mx = INT_MIN,sum=0,temp;
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n;j++) {
            cin >> temp;
            mx = max(mx,temp);
            sum+=temp;
        }

        //if((n-1)*mx-sum < 0) {
            int ntm = mx*(n-1)-(sum-mx);
            if(ntm>=mx)
                cout << ((n-1)-((mx-ntm)%(n-1)))%(n-1) << endl;
            else cout << ntm << endl;

        //}
        //else cout <<abs((n-1)*mx-sum) << endl;
    }
    return 0;
}
