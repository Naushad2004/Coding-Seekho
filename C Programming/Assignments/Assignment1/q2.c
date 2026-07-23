#include<stdio.h>
int main() {
    // Greet to user
    printf("Enter your name: ");
    char name[50];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}