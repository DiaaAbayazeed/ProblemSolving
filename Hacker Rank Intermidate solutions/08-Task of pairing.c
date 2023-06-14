/*
 ============================================================================
 Name        : Task.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n=4 ,i;
	int freq[]={2,4,3,1};
	int z=0,res=0;
	for(i=0;i<n;i++){

		z=freq[i]/2;
		freq[i]%=2;
		res+=z;
		if(i==0)continue;
		if(freq[i] == freq[i-1] &&  freq[i]==1)
		{
			res++;
			freq[i]=0;
			freq[i-1]=0;
		}

	}


	printf("res:%d",res);

	return 0;
}
