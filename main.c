#include "stdio.h"

int funcVal(int a) {
    a = 20;

    return 0;
}

int funcRef(int *a) {
    *a = 20;

    return 0;
}

int main(){
    int x = 0;

    x = 10;
    printf("a = %x -> %d\n",&x, x);
    //funcVal(x);
    funcRef(&x);
    printf("a = %d\n", x);

    return 0;
}