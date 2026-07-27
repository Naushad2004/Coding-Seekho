#include <stdio.h>
int main() {
    /* Armstrong number check
    153 = 1^3 + 5^3 + 3^3 = 153*/ 
    int num,original,r,sum=0; // Original is used to save the number 
    printf("Enter the number : ");
    scanf ("%d",&num);
    original=num;
    while(num!=0) {
        r=num%10; // 153/10= 3
        sum+=r*r*r; // 0=0+(3*3*3)
        num/=10;
    }
    if (original==sum) {
        printf ("The number %d is Armstrong",original);
    }
     else {
    printf ("The number %d is not Armstrong",original);
    }
return 0;
}