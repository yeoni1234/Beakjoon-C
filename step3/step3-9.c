/*별 찍기*/

#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) // N갯수만큼 라인 만들기
    {
        for (int j = 1; j <= i ; j++)
            printf("*");
            printf("\n");
        
    }
    

    return 0;

}