#include <stdio.h>


int main(){

    int result;
    int num;

    scanf("%d\n", &result);
    scanf("%d\n", &num);

    int x, y;
    int sum = 0;
    

    for(int i = 0; i < num; i++){
        scanf("%d %d", &x, &y);
        sum += (x * y);

    }



    if (sum == result) 
        printf("Yes");
    else
        printf("No");


    return 0;

}