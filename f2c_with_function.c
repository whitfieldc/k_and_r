#include <stdio.h>

int f2c(float f);

int main()
{
    printf("Fahrenheit to Celsius Conversion Table\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        printf("%3.0f %6.1d\n", fahr, f2c(fahr));
        fahr = fahr + step;
    }

    return 0;
}

int f2c(float fahr)
{
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}