#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char str[500000];
    for(int i = 0; i < t;i++) {
        scanf("%s",str);
        int k=0;
        while(str[k]!='\0') k++;

        int str_size = k;
        int ri=0;
        int ris=1, temp=1;

        while(ri < str_size) {
            if(str[ri] == 'L') {

                temp++;
                ri++;
            }
            else {
                ris = max(ris,temp);
                temp = 1;
                while(ri < str_size && str[ri] == 'R') ri++;
            }
        }
        ris = max(ris,temp);
        printf("%d\n",ris);
    }
    return 0;
}
