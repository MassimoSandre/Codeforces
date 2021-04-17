#include <bits/stdc++.h>

using namespace std;

vector<int> elements,parents,sizes;

int getLeader(int a) {
    if(parents[a]!=a) {
        return parents[a] = getLeader(parents[a]);
    }
    return parents[a];
}

void unionSets(int a, int b) {
    a = getLeader(a);
    b = getLeader(b);

    if(sizes[a]>sizes[b]) {
        swap(a,b);
    }

    parents[a] = b;
    sizes[b] +=sizes[a];
}

int main() {
    int n, m;
    cin >> n >> m;

    elements.resize(n);
    parents.resize(n);
    sizes.resize(n);
    for(int i = 0; i < n;i++) {
        elements[i] = i;
        parents[i] = i;
        sizes[i] = 1;
    }

    string qType;
    int s1,s2;
    for(int i = 0;  i < m; i++) {
        cin >> qType >> s1 >> s2;
        s1--;s2--;
        if(qType == "union") unionSets(s1,s2);
        else if(getLeader(s1)==getLeader(s2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
