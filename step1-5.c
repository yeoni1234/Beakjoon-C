#include <stdio.h>

int main(){

    int A, B;

    scanf("%d %d", &A, &B);
    // double 형식을 사용해야 소수점 15자리까지 출력 가능, 형식은 %lf 사용
    printf("%.9lf\n", (double) A / B); 
    
    //printf("%g\n", (float)A/B); - 이렇게 해도 나옴 (float 형식 맞춰주기)


return 0;

};