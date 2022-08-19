/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to add 2 distance (in inch-feet) system using structures
 Description : Structures_Ex2
 ============================================================================
 */
#include <stdio.h>

struct Sdistance
{
	int feet;
	float inch;
};
struct Sdistance get_data(char x[]);
struct Sdistance add(struct Sdistance n1, struct Sdistance n2);
void display(struct Sdistance d);
int main()
{
	struct Sdistance d1, d2, sum;
	d1 = get_data("ENTER FIRST DISTANCE");
	d2 = get_data("ENTER SECOND DISTANCE");
	sum = add(d1, d2);
	display(sum);

	return 0;
}
struct Sdistance get_data(char x[50])
{
	struct Sdistance n;
	printf("%s\nENTRR FEET: ",x);
	fflush(stdout);
	scanf("%d",&n.feet);
	printf("ENTER INCH: ");
	fflush(stdout);
	scanf("%f",&n.inch);
	return n;
}
struct Sdistance add(struct Sdistance n1, struct Sdistance n2)
{
	struct Sdistance sum;
	sum.feet = n1.feet + n2.feet;
	sum.inch = n1.inch + n2.inch;
		/* 1foot = 12inch*/
	while(sum.inch >= 12)
	{
		sum.feet++;
		sum.inch -= 12;
	}
	return sum;
}
void display(struct Sdistance d)
{
	printf("Sum of distances = %d feet and %.2f inch",d.feet,d.inch);
}
