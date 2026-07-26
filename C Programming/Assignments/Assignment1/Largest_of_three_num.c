// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // largest of three number
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf ("%d%d%d",&a,&b,&c);
    if(a>b && a>c) {
        printf ("The number %d is larger",a);
    }
    else if (b>a && b>c) {
        printf ("The number %d is larger",b);
    }
    else {
        printf ("The number %d is larger",c);
    }
    return 0;
}