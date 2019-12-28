//the function converts Fahrenheit into Celsius

#include <stdio.h>

float conversion(int temp);

int main()
{
    int c;
    printf("Fahreheit: ");
    scanf("%d", &c);

    printf("Celsius: %.2f\n", conversion(c));    
}

float conversion(int temp)
{
    return (5.0/9.0) * (temp - 32.0);
}
