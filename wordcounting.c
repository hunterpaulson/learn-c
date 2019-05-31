#include <stdio.h>

#define IN  1 //inside a word
#define OUT 0 //outside a word

//count lines, words, and character inputs
int <main()
{
    int c, numLines, numWords, numCharacters, state;

    state = OUT;
    numLines = numWords = numCharacters = 0;
    while ((c = getchar()) != EOF) {
        ++numCharacters;
        if (c == '\n') {
            ++numLines;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++numWords;
        }
    }
    printf("%d, %d, %d\n", numLines, numWords, numCharacters);
}