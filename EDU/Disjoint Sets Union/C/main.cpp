#include <bits/stdc++.h>

using namespace std;

vector<int> e,p,s,ep;

int getExp(int a) {
    if(a == p[a]) return ep[a];
    else return ep[a] + getExp(p[a]);
}

int getLeader(int a) {
    if(p[a]!=a) return getLeader(p[a]);
    return a;
}

void unionSets(int a, int b) {
    a = getLeader(a);
    b = getLeader(b);

    if(a == b) return;

    if(s[a]>s[b]) swap(a,b);

    p[a] = b;
    s[b] += s[a];
}

int main() {
    int n,m,x,y,v;
    string q;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    e.resize(n);
    p.resize(n);
    s.resize(n);
    ep.resize(n);

    for(int i = 0; i < n;i++) {
        e[i] = i;
        p[i] = i;
        s[i] = 1;
        ep[i] = 0;
    }

    for(int i = 0; i < m;i++) {
        cin >> q;

        if(q == "add") {
            cin >> x >> v;
            x--;
            ep[getLeader(x)] += v;
        }
        else if(q == "join") {
            cin >> x >> y;
            x--;y--;
            unionSets(x,y);
        }
        else {
            cin >> x;
            x--;
            cout << getExp(x) << endl;
        }
    }

    return 0;
}
