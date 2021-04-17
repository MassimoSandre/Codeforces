#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,temp;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n;i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n;i++) {
        cin >> temp;
        a[i]-=temp;
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}
