#include <stdio.h>
#include "fahrenheit2celsius.h"

double berechnung()
{
    double celsius;
     for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
    {
        celsius = (fahrenheit - 32.00) * 5/9;
        printf("%d \t %.2f \n", fahrenheit, celsius);
    }

    return 0;
}