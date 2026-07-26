#include<stdio.h>
int main() {
    // Palindrome Number check
    int num,rev=0,temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(num>0) {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(temp==rev) {
        printf("The number %d is a palindrome",temp);
    }
    else {
        printf("The number %d is not a palindrome",temp);
    }
    return 0;
}