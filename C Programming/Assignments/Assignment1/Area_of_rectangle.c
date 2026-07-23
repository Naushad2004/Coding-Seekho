#include <stdio.h>

int main() {
    // Area of rectangle
    int a,b,area;
    printf("Enter the length of the recangle: ");
    scanf("%d",&a);
    printf("\nEnter the breadth of the recangle: ");
    scanf("%d",&b);
    area=a*b;
    printf("\nThe area of rectangle is = %d ",area);

    return 0;
}