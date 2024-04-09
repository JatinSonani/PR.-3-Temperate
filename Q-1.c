//Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include<stdio.h>

main()
{
	char i = 'A';
	
	printf("Alphabets from 'a' to 'z' (skipping 3 alphabets):\n");
	
	do {
		printf("%c\t", i);
		i+=4;
		
		} while (i<= 'Z');
}