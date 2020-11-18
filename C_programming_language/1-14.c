#include <stdio.h>

 #define alphabet 27 

int main(){

    int c, asci_offset;
    int char_histo[alphabet];

    asci_offset = 97;
    for (int i = 0; i < alphabet; i++)
        char_histo[i] = 0;


    printf("Type a phrase of short words (< 10 chars), then press Ctrl+D\n");

    while((c = getchar()) != EOF){

        if (c == ' ' || c == '\n' || c == '\t'){
            char_histo[alphabet - 1]++;
        }else
            char_histo[c - asci_offset]++;

    }
    printf("\n");

    for (int i = 0; i < alphabet - 1; i++){
        printf("%c " ,asci_offset + i);
        for (int j = 0; j < char_histo[i]; j++)
            printf("-");
        printf("\n");
    }

    printf("\n");

}
