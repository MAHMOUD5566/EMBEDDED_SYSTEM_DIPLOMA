/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to show a pointer to an array which contents
   	   	   	   are pointer to structure.
 Description : Pointers_EX5
 ============================================================================
 */
#include <stdio.h>


struct Sdata
{
	char name[20];
	int ID;
};
int main()
{
	struct Sdata emp1 = {"aaa",10}, emp2 = {"Alex",1002}, emp3 = {"ccc",30}, emp4 = {"ddd",40};
	struct Sdata *arr[] = {&emp1, &emp2, &emp3, &emp4};
	struct Sdata ( *(*ptr)[4] ) = & arr;
	printf("IMOPLOYEE NAME: %s\n",(*(*ptr+1))->name);
	printf("EMPLOYEE ID:% d",(*(*ptr+1))->ID);
	return 0;
}

