/*코딩은 체육과목 입니다.*/

#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N / 4; i++){
            printf("long ");
        
    } // for문을 돌면서 N/4 (4의 배수)를 만족시키면 long이 계속 출력
    
        printf("int \n");

    return 0;
    
}