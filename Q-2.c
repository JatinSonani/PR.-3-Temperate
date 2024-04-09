//Q.2 Write a Program to count the total number of digits in a number.

#include<stdio.h>

int main() {
    int  n, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    
    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("Total number of digits: %d\n", count);

}
