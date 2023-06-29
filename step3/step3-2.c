/* A+B-3 */

#include <stdio.h>

int main(){

    int test;
    scanf("%d", &test);

    for (int i = 0; i<test; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d \n", a+b);
    }

    /*
    
    int test, b;
    scanf("%d", &test);
    
    for(int a = 1; a<10; a++){
        scanf("%d %d", &a, &b);
        printf("%d \n", a + b);
        
    }*/
    

    
    
    
    return 0;

}