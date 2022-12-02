#define CLEAR_NEWLINES { while(getchar()!='\n'); }
#define FORCED_CHAR 'z'

#include <stdio.h>

void doPrint(int times, char letter) {
    for(int i=0; i<(times<10?times:0); ++i) {
        printf("%c", letter);
    }
    letter=FORCED_CHAR; // no effect
}

void doSideEffectPrint(int times, char* letter) {
    doPrint(times, *letter);
    *letter=FORCED_CHAR;
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
    printf("\nprobably not %c: %c\n", FORCED_CHAR, letter);
    
    doSideEffectPrint(times, &letter);
    printf("\ndefinitely %c: %c", FORCED_CHAR, letter);
}
