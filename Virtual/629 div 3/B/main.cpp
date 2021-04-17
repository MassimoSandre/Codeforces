#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int t,l;
    cin >> t;
    vector<int> v(5000);
    for(int i = 0; i < t;i++) {
        cin >> l;
        vector<int> rilev(l,-1);
        bool pal = false;
        for(int j = 0; j < l; j++) {
            cin >> v[j];
            //cout << "(" << v[j] << ")";
            if(rilev[v[j]-1] == -1) {
                rilev[v[j]-1] = j;

            }
            else {
                //cout << "(" << j-rilev[v[j]-1] << ")";
                if(j-rilev[v[j]-1] >= 2) pal = true;

            }
        }
        /*cout << "(";
        for(int j = 0; j < l;j++) {
            printf("%d ",rilev[j]);
        }
        cout << ")";*/

        //for(int j = 0; j < l-2;j++)

        if(pal) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
