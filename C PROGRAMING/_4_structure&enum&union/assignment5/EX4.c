/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to store information of student using structure
 Description : Structures_Ex4
 ============================================================================
 */
#include <stdio.h>

struct Sinformatin
{
	int roll;
	char name[50];
	int marks;
};
struct Sinformatin get_data();
void display(struct Sinformatin x);
int main()
{
	struct Sinformatin a[10];
	int i;
	printf("ENTERING STUDENTS INFORMATION\n");
	for(i=0; i<10;i++)
	{
		a[i] = get_data();
	}
	printf("DISPLAYING STUDENTS INFORMATION\n");
	for(i=0; i<10;i++)
		{
		display(a[i]);
		}
	return 0;
}
struct Sinformatin get_data()
{
	struct Sinformatin m;
	printf("\nfor roll number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&m.roll);
	printf("\nENTER NAME: ");
	fflush(stdin);	fflush(stdout);
	gets(m.name);
	printf("\nENTER MARKS: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&m.marks);
	return m;
}
void display(struct Sinformatin x)
{
	printf("\nInformation for roll number: %d\nNAME: %s\nMARKS: %d\n",x.roll,x.name,x.marks);
}
