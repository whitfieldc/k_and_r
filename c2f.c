#include <stdio.h>

int main()
{
    printf("Celsius to Fahrenheit Temperatures\n");
    
    float fahr, cels;
    int start, stop, step;
    
    start = -10;
    stop = 100;
    step = 5;

    cels = start;

    while (cels <= stop){
        fahr = cels * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    };
};
