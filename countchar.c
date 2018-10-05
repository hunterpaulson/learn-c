#include <stdio.h>
/* Prints the number of charachters, spaces, and tabs 
in a line */

int main()
{
    long charNum, tabNum, spaceNum; 
    charNum = 0;
    tabNum = 0;
    spaceNum = 0;
    while(getchar() != EOF){
        charNum++;
        if (getchar() == ' '){
            ++spaceNum;
        }
        if (getchar() == '\t'){
            ++tabNum;
        }
    }
    printf("%ld chars\n%ld tabs\n%ld spaces\n", charNum, tabNum, spaceNum);
}