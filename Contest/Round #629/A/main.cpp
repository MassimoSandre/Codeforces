#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int t,a,b,mnm;
    cin >> t;
    for(int i = 0; i < t;i++) {
        cin >> a >> b;
        mnm = b - (a % b);
        if(mnm == b) mnm = 0;
        cout << mnm << endl;
    }


    return 0;
}
