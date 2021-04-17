#include <bits/stdc++.h>

using namespace std;

vector<int> e,p,s,mn,mx;

int getLeader(int a) {
    if(p[a] != a) {
        return p[a] = getLeader(p[a]);
    }
    return a;
}

void unionSets(int a, int b) {
    a = getLeader(a);
    b = getLeader(b);

    if(a == b) return;

    if(s[a]>s[b]) {
        swap(a,b);
    }

    p[a] = b;
    s[b] += s[a];
    mn[b] = min(mn[b],mn[a]);
    mx[b] = max(mx[b],mx[a]);
}

int main() {
    int n,m,e1,e2,eSel;
    string cmd;

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    e.resize(n);
    p.resize(n);
    s.resize(n);
    mn.resize(n);
    mx.resize(n);

    for(int i = 0; i < n;i++) {
        e[i] = i;
        p[i] = i;
        s[i] = 1;
        mn[i] = i;
        mx[i] = i;
    }

    for(int i = 0; i < m;i++) {
        cin >> cmd;

        if(cmd == "union") {
            cin >> e1 >> e2;
            e1--;e2--;
            unionSets(e1,e2);
        }
        else {
            cin >> e1;
            e1--;
            eSel = getLeader(e1);
            cout << mn[eSel]+1 << " " << mx[eSel]+1 << " " << s[eSel] << endl;
        }
    }

    return 0;
}
