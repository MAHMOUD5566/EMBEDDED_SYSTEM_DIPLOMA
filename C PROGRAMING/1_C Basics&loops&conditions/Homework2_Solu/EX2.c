/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to check Vowel or consonant
 Description : Homework2_EX2
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char a;
	while(1)
	{
		printf("\nENTER AN ALPHABET :");
		fflush(stdin);	fflush(stdout);
		scanf("%c",&a);
		if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
			printf("\n%c is a vowel",a);
		else
			printf("\n%c is a consonant",a);
	}
	return 0;
}
