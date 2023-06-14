/*
 ============================================================================
 Name        : Nice.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include<stdio.h>
int main()
{

	int n=6,minDiff=4,rating[]={1,2,3,4,5,6};
	int i ,j,count=0;

	for(i=0;i<n ;i++)
	{
		for(j=i;j<n;j++)
		{
			if(minDiff == abs(rating[i] - rating[j]))
			{
				count++;
				break;
			}

		}

	}

	printf("res: %d",count);

	return 0;
}










