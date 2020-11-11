#include <stdio.h>

int main(){

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("celsius\t  fahr\n");
    printf("-------\t  ----\n");
    printf("\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.0f %9.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}