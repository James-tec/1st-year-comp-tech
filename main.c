#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d = 100;

    printf("KILOMETRES  MILES\n");
    printf("__________  ______\n");

    while (d<=1000)
    {
        printf("%6.2f =   %6.2f\n", d, d/1.609);
        d = d + 50;
    }
    return 0;
}
