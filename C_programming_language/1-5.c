#include <stdio.h>

int main(){

    int fahr;

    printf("celsius\t  fahr\n");
    printf("-------\t  ----\n");
    printf("\n");

      for (fahr = 300; fahr >=0; fahr = fahr - 20){
        printf("%3d %9.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}