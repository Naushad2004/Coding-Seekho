#include<stdio.h>
int main() {
    // Sum of digits of number
    int num,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num>0) {
        sum=sum+num%10;
        num=num/10;
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}