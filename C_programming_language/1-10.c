#include <stdio.h>

int main(){

    int c, blank_counter;

    printf("Input some characters, then press Ctrl+D.\n");
    blank_counter = 0;
    while ((c = getchar()) != EOF){
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else 
            putchar(c);
    }

    return 0;
}