#include <stdio.h>

int main(){

    int H; // hour
    int M; // minute
    scanf("%d %d", &H, &M);

    M -= 45;

    if ( M < 0){
        M += 60;
        H -= 1;

        if ( H < 0) H = 23;
    }

    printf ("%d %d", H, M);

    return 0;

}