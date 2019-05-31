#include <stdio.h>

#define IN  1 //in a word
#define OUT 0 //out of a word

//page 37

//counts the number of digits per word and makes a histogram
int main()
{
    int numDigits[10];
    int c;
    int charCount = 0;
    int state = OUT;

    //set the array to zero
    for (int i = 0; i < 10; i++){
        numDigits[i] = 0;
    }

    //build the histogram
    while ((c = getchar()) != EOF) {

        //if on a character
        if (c != ' ') {
            state = IN;
            charCount++;
        }

        //if you get to a space right after a word, change to out and stop counting characters
        else if (state == IN && c == ' ') {
            state = OUT;
            //add the length of the word to our array
            switch (charCount) {
                case 1:
                    ++numDigits[1];
                    break;
                case 2:
                    ++numDigits[2];
                    break;
                case 3:
                    ++numDigits[3];
                    break;
                case 4:
                    ++numDigits[4];
                    break;
                case 5:
                    ++numDigits[5];
                    break;
                case 6:
                    ++numDigits[6];
                    break;
                case 7:
                    ++numDigits[7];
                    break;
                case 8:
                    ++numDigits[8];
                    break;
                case 9:
                    ++numDigits[9];
                    break;
                default:
                    break;
            }
            //reset the charCount
            charCount = 0;
        }        
    }

    //print result
    //prints a '*' for ever word with 1 digit
    for (int i = 1; i < 10; i++) {
        printf("%d digits: ", i);
        for (int j = 0; j < numDigits[i]; j++) {
            printf("*");
        }
    printf("\n");
    }
}