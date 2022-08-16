/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : 
 Description : 
 ============================================================================
 */
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0, j = 0;
	for(i=0; i<10; i++)
	{
		for(; j<10; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		j = i + 1;

	}
	return 0 ;
}
