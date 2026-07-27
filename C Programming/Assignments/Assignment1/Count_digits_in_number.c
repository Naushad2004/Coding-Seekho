#include<stdio.h>
int main()
// Code to count the number of digits in a number
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        num /= 10;
        count++;
    }
    printf("The number of digits in the number is: %d", count);
    return 0;
}