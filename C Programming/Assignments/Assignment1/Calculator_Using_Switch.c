#include<stdio.h>
int main() {
    // Calculator using switch case
    int num1,num2,choice;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("Enter your choice : \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
            printf("The sum of %d and %d is : %d",num1,num2,num1+num2);
            break;
        case 2:
            printf("The difference of %d and %d is : %d",num1,num2,num1-num2);
            break;
        case 3:
            printf("The product of %d and %d is : %d",num1,num2,num1*num2);
            break;
        case 4:
            if(num2!=0) {
                printf("The quotient of %d and %d is : %.2f",num1,num2,(float)num1/num2);
            }
            else {
                printf("Division by zero is not allowed");
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}