/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C function that reverse an input array
 Description : _3_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

void reverse(int a[],int n);
int main()
{
	int a[5], i;
	printf("ENTER THE ARRAY :");
	fflush(stdin);	fflush(stdout);
	for(i=0; i < 5; i++)
		scanf("%d",&a[i]);
	reverse(a,5);
	return 0;
}
void reverse(int a[],int n)
{
	int b[5], i, j;
	for(i=0, j=4; i < n; i++,j--)
		b[i] = a[j];
		/*printig thr reverse*/
	printf("THE REVERSE ARRAY : ");
	for(i=0; i < n; i++)
		printf("%d ",b[i]);

}

