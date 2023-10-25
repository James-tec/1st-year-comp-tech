#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Enter the starting value\n");
    scanf("%f", &a);
    printf("Enter the increament value\n");
    scanf("%f", &b);
    printf("Enter the end value\n", c);
    scanf("%f", &c);

    printf("fahrenheit         celcius\n");
    printf("__________         _______\n");

    while (a <= c)
    {
        printf("%6.2f degrees F = %6.2f degrees C\n", a, (a-32.0)*5.0/9.0);
        a = a + b;

    }
    return 0;
}
