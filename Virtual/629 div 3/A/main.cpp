#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,l;
    cin >> t;
    for(int i = 0; i <t;i++) {
        cin >> l;
        vector<int> v(l);
        int mx = -1;
        for(int j = 0; j < l; j++) {
            cin >> v[j];
            mx = max(mx,v[j]);
        }

        bool pos = true;
        for(int j = 0; j < l&&pos; j++) {
            if((mx-v[j])%2==1) pos = false;
        }
        if(pos) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
