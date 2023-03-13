#include <stdio.h>

int main(void){

    
    int A, B;

    scanf("%d %d", &A, &B); 

    printf("%d\n", A*(B%10));
    printf("%d\n", A*(B%100/10)); // 100으로 나눈 나머지를 10으로 나눈 몫 출력
    printf("%d\n", A*(B/100));
    printf("%d\n", A*B);






    return 0;


};