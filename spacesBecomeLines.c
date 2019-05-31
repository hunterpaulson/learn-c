#include <stdio.h>

#define IN  1 //in a word
#define OUT 0 //out of a word

//print the input file but seperate wach word with a '\n' instead of a ' '
int main()
{
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        //if you get to a space right after a word, print a '\n'
        if (state == IN && c == ' ') {
            state = OUT;
            printf("\n");
        }
        //if there is 2 or more spaces in a row
        if (state == OUT && c == ' ') {
            putchar(c);
        }
        //if a character after a space
        else if (c != ' ') {
            state = IN;
            putchar(c);
        }
    }
}