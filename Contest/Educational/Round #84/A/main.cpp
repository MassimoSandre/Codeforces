#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/// 1 2 3 5  7  9  11 13 15
/// 1 2 3 4  5  6  7   8  9
/// 1 3 5 10 17 26 37 40 65

int main()
{
    int t,n, k;
    scanf("%d",&t);

    for(int i = 0; i < t; i++) {
        scanf("%d %d", &n, &k);

        if(n <= 2 && k == 2) {
            printf("NO\n");
            continue;
        }

        if(k % 2 == 1) {
            if(n%2 == 0) {
                printf("NO\n");
            }
            else if(n < ((k*(k-2))+2)) {
                printf("NO\n");
            }
            else {
                printf("YES\n");
            }
        }
        else {
            if(n%2 == 1) {
                printf("NO\n");
            }
            else if(n < ((k*(k-2))+2) || n == ((k*(k-2))+3)) {
                printf("NO\n");
            }
            else {
                printf("YES\n");
            }
        }
    }

    return 0;
}
