/* 10951번 */

#include <stdio.h>

int main(){

    int a, b;

    while (1) {
        if (scanf("%d %d", &a, &b) == EOF)
        break;
        // EOF 는 입력의 종료를 의미
        else 
        printf("%d \n", a+b);
        
    }

    return 0;

}