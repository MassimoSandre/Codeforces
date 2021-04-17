#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t;i++) {
        string s;
        cin >> s;
        int op0 = 0,
            op1 = 0;

        int ris = 0;

        for(int j = 0; j < s.size();j++) {
            if(s[j]=='(') {
                op0++;
            }
            else if(s[j]==')') {
                ris+=op0;
            }
            else if(s[j]=='[') {
                op1++;
            }
            else if(s[j]==']') {
                ris+=op1;
            }
        }

        cout << ris << endl;

    }
    return 0;
}
