// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Swap two no. using third variable
    int a,b,temp;
    printf("Enter the value of a : ");
    scanf("%d",&a);
     printf("\nEnter the value of b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nThe value of a : %d\n",a);
    printf("\nThe value of b : %d",b);
    
    return 0;
}