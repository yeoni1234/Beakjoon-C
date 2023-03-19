#include <stdio.h>

int main(){

    int H;  // hour
    int M;  // minute
    int T;  // need time
    scanf("%d %d %d", &H, &M, &T);

    H += T / 60;
    M += T % 60;

    if (M >=60){
        H += 1;
        M -= 60;

    }
    else if(H >= 24){
        H -= 24;
    }

    printf("%d %d", H, M);


    return 0;


}