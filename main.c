#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pound = 100;

    printf(" POUNDS   KILOGRAMS\n");
    printf(" ______   _________\n");

    while (pound <= 1000)
    {
        printf("%6.2f  = %6.2f \n", pound, pound/2.205);
        pound = pound + 50;
    }

    return 0;
}
