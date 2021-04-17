#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int a0,a1,b0,b1;
} tile;

int main() {
    int t,n,m;
    cin >> t;
    for(int i = 0; i < t;i++) {
        cin >> n >> m;

        vector<tile> v(n);

        bool c1 = false, c2 = false;

        for(int j = 0; j < n;j++) {
            cin >> v[j].a0 >> v[j].a1 >> v[j].b0 >> v[j].b1;
        }

        for(int j = 0; j < n;j++) {
            if(v[j].a0==v[j].b1&&v[j].a1==v[j].b0) c1 = true;

            for(int k = 0; k <= j;k++) {
                if((v[k].a0 == v[j].a0&&v[k].a1 == v[j].b0) ||
                   (v[k].b0 == v[j].a1&&v[k].b1 == v[j].b1) ||
                   (v[j].a0 == v[k].a0&&v[j].a1 == v[k].b0) ||
                   (v[j].b0 == v[k].a1&&v[j].b1 == v[k].b1)) c2 = true;
            }
        }

        if(c1 && c2 && m%2==0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}
