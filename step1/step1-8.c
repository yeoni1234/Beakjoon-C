#include <stdio.h>

int main(){

    int year;
    //불기연도 = 당해년도 + 544 (543-윤달)

    scanf("%d", &year);
    printf("%d", year-543);



    return 0;
    
};