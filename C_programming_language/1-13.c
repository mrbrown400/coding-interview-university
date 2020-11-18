#include <stdio.h>

int main (){

    int c, word_length;
    int num_length_word[10];

    word_length = 0;
    for (int i = 0; i < 10; i++)
        num_length_word[i] = 0;


    printf("Type a phrase of short words (< 10 chars), then press Ctrl+D\n");

    while((c = getchar()) != EOF){

        if (c == ' ' || c == '\n' || c == '\t'){
            num_length_word[word_length - 1]++;
            word_length = 0;
        }else
            word_length++;

    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d " ,i + 1);
        for (int j = 0; j < num_length_word[i]; j++)
            printf("-");
        printf("\n");
    }
    
    printf("\n");

}