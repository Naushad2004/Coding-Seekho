// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Grade Calculator
   int marks;
   printf ("Enter the marks : ");
   scanf ("%d", &marks);
    if (marks>=90) {
         printf ("Grade A");
    }
    else if (marks>=80 && marks<90) {
         printf ("Grade B");
    }
    else if (marks>=70 && marks<80) {
         printf ("Grade C");
    }   
    else if (marks>=60 && marks<70) {
         printf ("Grade D");
    }
    else {
         printf ("Grade F");
    }           
    return 0;
}