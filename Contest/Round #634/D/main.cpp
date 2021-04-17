#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    vector<vector<int>> mat(9,vector<int>(9));
    char c;
    cin >>t;
    for(int i = 0; i < t;i++) {
        for(int j = 0; j < 9;j++) {
            for(int k = 0; k < 9; k++) {
                cin >> c;
                mat[j][k] = c-49;
            }
        }

        mat[0][0] = (mat[0][0]+1)%9;
        mat[1][3] = (mat[1][3]+1)%9;
        mat[2][6] = (mat[2][6]+1)%9;
        mat[3][1] = (mat[3][1]+1)%9;
        mat[4][4] = (mat[4][4]+1)%9;
        mat[5][7] = (mat[5][7]+1)%9;
        mat[6][2] = (mat[6][2]+1)%9;
        mat[7][5] = (mat[7][5]+1)%9;
        mat[8][8] = (mat[8][8]+1)%9;

        for(int j = 0; j < 9;j++) {
            for(int k = 0; k < 9; k++) {
                c = mat[j][k] + 49;
                cout << c;
            }
            cout << endl;
        }
    }
    return 0;
}
