#include<stdio.h>
int main()
{
    int base, exponent;
    long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    for(int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    printf("The value of %d^%d = %ld", base, exponent, result);
    return 0;
}