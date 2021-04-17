#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,x,temp;
    cin >> t;

    for(int i = 0; i < t;i++) {
        vector<int> a(203,0);
        cin >> n >> x;
        for(int j = 0; j< n;j++) {
            cin >> temp;
            a[temp-1] = 1;

        }

        int j;
        for(j = 0; j<200&& x>0;j++) {
            if (a[j]==0){
                a[j] = 1;
                x--;
            }

        }
        j =0;
        int v = 0;
        while(a[j]==1) {
            v++;
            j++;
        }
        cout <<v << endl;

    }
    return 0;
}
