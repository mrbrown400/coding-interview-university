#include <stdio.h>

int main(){
    int c, nl, nb, nt;

    nl = 0;
    nb = 0;
    nt = 0;

    printf("Input some characters, then press Ctrl+D.\n");
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
    }

    printf("\n%d %d %d", nl, nb, nt);
}