#include <stdio.h>

int main(){

    char ID[50];

    scanf("%s", ID ); // 출력할 문자가 string형이기 때문!!
    printf("%s?\?!", ID); // 연속될 경우 두번째 기호 앞에 \ 표시

    return 0;

};