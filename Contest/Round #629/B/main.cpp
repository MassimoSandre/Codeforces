#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long t, n, k, p1=-1,p2,temp;
    cin >> t;
    for(int i = 0; i < t;i++) {
        cin >> n >> k;

        temp = (-1+sqrt((unsigned long long)1+((unsigned long long)8*(k-1))))/2;

        p2 = n-temp-2;
        p1 = n-(k - ((temp)*(temp+1)/2+1))-1;

        for(int j = 0; j < n; j++) {
            if(j == p2 || j == p1) cout << "b";
            else cout << "a";
        }
        cout << endl;
    }
    return 0;
}
