#include <stdio.h>
double berechnung();

int main(){
    double celsius;
    int fahrenheit;
    printf("Fahrenheit \t Celsius\n");
    //printf("%d \t %.2f \n", berechnung(celsius, fahrenheit));
    berechnung(celsius, fahrenheit);
    return 0;
}

double berechnung(double celsius, int fahrenheit)
{
     for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
    {
        celsius = (fahrenheit - 32.00) * 5/9;
        printf("%d \t %.2f \n", fahrenheit, celsius);
    }

    return 0;
}
