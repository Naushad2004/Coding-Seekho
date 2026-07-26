#include<stdio.h>
int main() {
    // Count vowel in string
    char str[100];
    int i,count=0;
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin); /* to read string with spaces, str means the array where input is stored, sizeof(str) is the size of the array or maximum number of characters that can be read, stdin is the standard input stream from keyboard*/ 
    for(i=0;str[i]!='\0';i++) // loop until null character is encountered 
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
        }
    }
    printf("The number of vowels in the string is : %d",count); 
    return 0;
}