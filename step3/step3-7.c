/*A+B-7*/

#include <stdio.h>

int main(){

    int test;
    scanf("%d", &test);

    for(int i = 1; i <= test; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d \n", i, a+b);
    }

    return 0;

}