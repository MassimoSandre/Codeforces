#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.setf(ios_base::dec);
    cin.setf(ios_base::dec);

    uint64_t  t,n,d,k,keep;
    cin >> t;
    while(t--) {
        cin >> n;
        keep = n;
        pair<uint64_t,uint64_t> best = make_pair(0,0);


        uint64_t temp = 0;
        while(n%2 == 0&&n!=2) {
            temp++;
            n/=2;
        }

        if(temp>best.first) {
            best.first = temp;
            best.second = 2;
        }

        for(int i = 3; i <= sqrt(n);i+=2) {
            temp = 0;
            while(n%i == 0) {
                n/=i;
                temp++;
            }
            if(temp>best.first) {
                best.first = temp;
                best.second = i;
            }
        }



        if(best.first!=0) {
            cout << best.first<<endl;
            for(int i = 0; i < best.first-1;i++) {
                cout << best.second << " ";
            }
            keep/=pow(best.second,best.first-1);
            cout << keep<<endl;
        }
        else {
            cout << 1 << endl  << keep << endl;
        }
    }
    return 0;
}
