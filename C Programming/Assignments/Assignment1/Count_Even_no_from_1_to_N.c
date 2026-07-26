// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Count even no from 1 to N  
    int num,res;
    printf("Enter the number : ");
    scanf ("%d",&num);
    for (int i=1;i<=num;i++ ); {
        res=num/2;
    }
    printf ("The even number between 1 to %d is : %d",num,res);
    
   return 0;
}