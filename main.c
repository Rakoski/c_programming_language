#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3f\t%6f\n", fahr, celsius);
        fahr = fahr + step;
    }

}