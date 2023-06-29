/*빠른 A+B*/

#include <stdio.h>

int main(){

   int test;
   scanf("%d", &test);

    int a, b;
    int sum = 0;

   for (int i=0; i<test; i++){
    scanf("%d %d", &a, &b);
    sum = (a + b);
    printf("%d \n", sum);
   }

    return 0;

}


/*
int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
        */