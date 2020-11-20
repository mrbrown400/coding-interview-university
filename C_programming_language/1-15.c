#include <stdio.h>

int f2c(int); 

int main(){

    int fahr;

    printf("fahr\t  celsius\n");
    printf("----\t  -------\n");
    printf("\n");

      for (fahr = 20; fahr <=300; fahr = fahr + 20){
        printf("%3d %9.1d\n", fahr, f2c(fahr));
    }

}

int f2c (int fahr){
    return 5.0 * (fahr - 32.0)/9;
}