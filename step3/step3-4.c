/* 영수증 */

#include <stdio.h>


int main(){

    int num, total;

    scanf("%d \n", &total);
    scanf("%d \n", &num);

    int cost, n; // n=품목별 구매한 갯수로, num(총 수량과 다른 변수!!)
    int sum = 0;

    for (int i = 0; i<num; i++){
        
        scanf("%d %d", &cost, &n);
        sum += (cost * n); // 괄호 꼭 해주기!
        
    }


     if (total == sum){
         printf("Yes");

     }
     else{
         printf("No");
     }
    

    return 0;

}