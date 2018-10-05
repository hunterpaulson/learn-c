#include <stdio.h>
#define LOWER  -100
#define UPPER  300
#define STEP  20
int main()
{
    /*
    float fahr, celsius;
    float lower, upper, step;
    lower = -100;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5*(fahr-32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    or this way they produce the same thing...
    */
   int fahr;
   for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
       printf("%4d%7.1f\n", fahr, (5.0/9.0)*(fahr-32));
   }
}
/*
first part of the printf() comand is the formatting section
% = each thing after each comma
d = integer
xd = integer of lenght x (it wont cut off the number but it will save less space for it)
f = float
x.yf = float with total length x and lenght after decimal y
%s = string
*/