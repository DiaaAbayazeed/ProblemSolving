/*
 ============================================================================
 Name        : Maximum.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

long maxSubarrayValue(int n, int* arr)
{
     long MAX = 0;

    //negate odd indexed elements
    for(int i=1;i<n;i+=2)
    {
        arr[i] = 0 - arr[i];
    }

    long maxSoFar = arr[0];
    long currMax = arr[0];
    long currMin = arr[0];
    long minSoFar = arr[0];

    for (int i = 1; i < n; i++)
    {
        currMax = max(arr[i] , currMax + arr[i]);
        maxSoFar = max(maxSoFar , currMax);
        if (currMin > 0)
            currMin = arr[i];
        else
            currMin += arr[i];

        minSoFar = min(minSoFar , currMin);
    }
    MAX = max( abs(maxSoFar) , abs(minSoFar) );

    return MAX * MAX;
}



int main(void) {

	int n=3;
	int arr[]={-1,-4,2};
	int x=maxSubarrayValue(n,arr);
	printf("%d",x);









	return 0;
}
