#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int a,b;
} modo;

int main()
{
    int t,n,nModi=0;
    vector<modo> modi(2);
    cin >> t;
    for(int i = 0; i < t;i++) {
        nModi = 0;
        cin >> n;
        vector<int> v(n),a(n),b(n);
        for(int j = 0; j < n;j++) {
            cin >> a[j];
            v[j]  =a[j];
            b[j] = a[j];
        }
        sort(v.begin(),v.end());
        int ncdv = 0;
        int k=0;
        while(v[k]==v[k+1]) {
            ncdv++;
            k+=2;
        }
        if(ncdv == 0) {
            cout << 0 <<endl;
            continue;
        }
        //cout << "(" << ncdv<<")" << endl;

        sort(a.begin(),a.begin() + ncdv);
        sort(a.begin()+ncdv,a.end());
        k = 0;
        bool giusto = true;
        while(giusto && k < ncdv-1) {
            if(a[k]!=a[k+1]-1)giusto=false;
            k++;
        }
        if(giusto){
            k = ncdv;
            while(giusto && k < n-1) {
                if(a[k]!=a[k+1]-1)giusto=false;
                k++;
            }if(giusto) {
                modi[nModi].a = ncdv;
                modi[nModi].b = n-ncdv;
                nModi++;
            }
        }


        sort(b.begin(),b.end()-ncdv);
        sort(b.end()-ncdv,b.end());
        k = 0;

        giusto = true;
        while(giusto && k < n-ncdv-1) {
            if(b[k]!=b[k+1]-1)giusto=false;
            k++;
        }
        if(giusto){
            k = n-ncdv;
            while(giusto && k < n-1) {
                if(b[k]!=b[k+1]-1)giusto=false;
                k++;
            }if(giusto) {
                modi[nModi].a = n-ncdv;
                modi[nModi].b = ncdv;
                nModi++;
            }
        }

        //if(modi[0].a == modi[1].a) nModi--;

        cout << nModi<< endl;
        for(int j = 0; j < nModi;j++) {
            cout << modi[j].a << " " << modi[j].b << endl;
        }

    }
    return 0;
}
