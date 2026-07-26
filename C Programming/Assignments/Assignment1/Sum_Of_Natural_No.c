// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Sum of first natural number 
    int num;
    int sum = 0;
    printf ("Enter the number : ");
    scanf ("%d",&num);
    for (int i=1;i<=num;i++) {
        sum=sum+i;
    }
     printf ("The sum of Natural number is : %d",sum);
   return 0;
}