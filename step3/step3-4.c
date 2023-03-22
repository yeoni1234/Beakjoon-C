#include <stdio.h>


int main(){

    int x, n, a, b;
    int sum = 0;
    scanf("%d\n", &x);
    scanf("%d\n", &n);

    for(int i = 0; i <= n; i++){
        scanf("%d %d", &a, &b);
        sum += a * b;

    }


    if (x = sum) 
        printf("YES");
    else
        printf("No");


    return 0;

}