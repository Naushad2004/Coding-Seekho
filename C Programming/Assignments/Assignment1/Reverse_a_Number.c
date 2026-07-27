//
    /* num=1234=4321
    1234%10=4
    num/10*/
#include<stdio.h>
    int main(){
    int a,temp,digit,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        digit=a%10;
        reverse=reverse*10+digit;
      a/=10;
    }
    printf("The reverse of %d is %d.",temp,reverse);
    return 0;
}