#define CLEAR_NEWLINES { while(getchar()!='\n'); }

#include <stdio.h>

void doPrint(int times, char letter) {
    for(int i=0; i<(times<10?times:0); ++i) {
        printf("%c", letter);
    }
    letter='z'; // no effect
}

void doSideEffectPrint(int times, char* letter) {
    doPrint(times, *letter);
    *letter='z';
}


void main()
{
    int times;
    char letter;
    
    printf("times to print:");
    scanf("%d", &times); CLEAR_NEWLINES;
    
    printf("character to print:");
    scanf("%c", &letter); CLEAR_NEWLINES;
    
    doPrint(times, letter);
    printf("\nprobably not z: %c\n", letter);
    
    doSideEffectPrint(times, &letter);
    printf("\ndefinitely z: %c", letter);
}
