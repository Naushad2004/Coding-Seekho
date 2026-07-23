// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Calculate simple interest
    int p,r,t;
    float SI;
    printf("Enter the P R T value : ");
    scanf("%d%d%d",&p,&t,&r);
    SI=(p*r*t)/100;
    printf("The SI is :%.3f  ",SI);
    
    return 0;
}