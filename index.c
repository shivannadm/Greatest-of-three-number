#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("Number %d is grater", a);
    }
    else if (b > a && b > c)
    {
        printf("Number %d is greter", b);
    }
    else
    {
        printf("Number %d is grater", c);
    }
    return 0;
}