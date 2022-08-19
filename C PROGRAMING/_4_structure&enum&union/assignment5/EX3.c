/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to add 2 complex by passing structure to a function
 Description : Structures_Ex3
 ============================================================================
 */
#include <stdio.h>

struct Scomplex
{
	float real;
	float img;
};
struct Scomplex get_data(char x[]);
struct Scomplex add(struct Scomplex n1, struct Scomplex n2);
void display(struct Scomplex n);
int main()
{
	struct Scomplex n1, n2, sum;
	n1 = get_data("FOR 1st NUMBER");
	n2 = get_data("FOR 2nd NUMBER");
	sum = add(n1, n2);
	display(sum);

	return 0;
}
struct Scomplex get_data(char x[50])
{
	struct Scomplex n;
	printf("%s\nENTRR REAL: ",x);
	fflush(stdout);
	scanf("%f",&n.real);
	printf("ENTER IMAGINARY: ");
	fflush(stdout);
	scanf("%f",&n.img);
	return n;
}
struct Scomplex add(struct Scomplex n1, struct Scomplex n2)
{
	struct Scomplex sum;
	sum.real = n1.real + n2.real;
	sum.img = n1.img + n2.img;
	return sum;
}
void display(struct Scomplex n)
{
	printf("Sum  = %.3f + %.3fi ",n.real,n.img);
}
