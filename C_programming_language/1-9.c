#include <stdio.h>

int main(){

    int c, blank_counter;

    printf("Input some characters, then press Ctrl+D.\n");
    blank_counter = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (!blank_counter){
                blank_counter = 1;
                putchar(c);
            }
        } else {
            blank_counter = 0;
            putchar(c);
        }
    }

    return 0;
}