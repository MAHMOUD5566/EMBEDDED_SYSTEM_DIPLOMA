/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to make simple calculator to add,subtract
 	 	 	   ,multiply and devide two operands using switch case
 Description : Homework2_EX8
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char x;
	float n1, n2;
	printf("ENTER OPERATOR EITHER + OR - OR * OR / : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&x);
	printf("\nENTER OPERANDS : ");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f",&n1,&n2);
	switch(x)
	{
	case '+':
		printf("\n%f + %f = %f",n1,n2,n1+n2);
	break;
	case '-':
		printf("\n%f - %f = %f",n1,n2,n1-n2);
	break;
	case '*':
		printf("\n%f * %f = %f",n1,n2,n1*n2);
	break;
	case '/':
		printf("\n%f / %f = %f",n1,n2,n1/n2);
	break;
	}
	return 0;
}
