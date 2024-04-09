//Q.3 Write a Program to find the sum of a first and the last digit of a number.

#include<stdio.h>

int main() {
    int n, f, l, sum;

    printf("Enter Value: ");
    scanf("%d", &n);

	l = n % 10;
   
    f = n;
    
    while (f >= 10)
	{
        f /= 10;
    }
    
    sum = f + l;

    printf("Sum of first and last digits: %d\n", sum);

   
}
