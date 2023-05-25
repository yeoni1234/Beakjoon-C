#include <stdio.h>

int main(){

   int test;
   scanf("%d\n", &test);
   
   int a, b;
   int sum = 0;

   for (int i = 0; i < 1000000; i++){
    scanf("%d %d", &a, &b);
    sum = a + b;

   } 

    printf("%d", sum);

    return 0;

}