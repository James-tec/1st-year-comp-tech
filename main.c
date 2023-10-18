#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value of the first number:\n");
    scanf("%d", &a);

    printf("Enter the value of the second number:\n");
    scanf("%d", &b);

    printf("Enter the value of the third number:\n");
    scanf("%d", &c);

    d = a+b+c;
    printf("%d + %d + %d = %d",a, b, c, d);

    return 0;
}
