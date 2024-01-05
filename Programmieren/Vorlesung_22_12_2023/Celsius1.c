#include <stdio.h>

int main(){
    int fahrenheit = 0;
    int celsius;
    printf("Fahrenheit \t Celsius\n");
    while (fahrenheit <= 300){
        celsius = (fahrenheit - 32) * 5/9;
        printf("%d \t %03d \n", fahrenheit, celsius);
         fahrenheit= fahrenheit + 20;
    }
    return 0;
}
