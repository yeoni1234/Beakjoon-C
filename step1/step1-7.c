#include <stdio.h>

int main(){

    char ID[50]; //  문자열 쓸거니까 크기 정해주기

    scanf("%s", ID ); // sting 할때는 &안해줘도 됨
    printf("%s?\?!", ID); // 연속될 경우 두번째 기호 앞에 \ 표시

    return 0;

};