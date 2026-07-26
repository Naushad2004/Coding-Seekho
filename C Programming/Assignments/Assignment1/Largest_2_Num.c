// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Largest of two number 
    int a,b;
    printf ("Enter the two number : ");
    scanf ("%d%d",&a,&b);
    if(a>b) {
        printf ("The 1st number %d is larger",a);
    }
        else if(a<b) {
       printf ("The 2nd number %d is larger",b);     
        }
        else {
            printf("The both number is equal ");
        }
   return 0;
}