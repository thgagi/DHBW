#include <stdio.h>

int main(){
    int x = 2134;
    int y = 53;

    while (x != y)
    {
        if (x >= y)
        {
            x = x - y;
            printf("Rechnung: %d = %d - %d\n", x , x ,y);
        }
        else{
            y = y - x;
            printf("Rechnung: %d = %d - %d\n", x , x ,y);
        }
    }
}