#include <stdio.h>

int main(){

    double celsius;
    printf("Fahrenheit \t Celsius\n");
    for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
    {
        celsius = (fahrenheit - 32.00) * 5/9;
        printf("%d \t %.2f \n", fahrenheit, celsius);
    }
    return 0;
}
