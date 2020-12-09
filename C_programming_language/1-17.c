#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0){
        if (len > 80){
            printf("%s, %d", line, len);
        }
    }
}

int getLine(char s[], int lim){
    int c, i;

    for (i = 0; i < lim-1 &&(c = getchar())!=EOF && c!='\n'; i++)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

