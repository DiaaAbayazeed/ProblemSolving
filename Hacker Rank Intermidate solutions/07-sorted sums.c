/*
 ============================================================================
 Name        : sorted.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
// Optimized implementation of Bubble sort
#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   int swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = 0;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = 1;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == 0)
        break;
   }
}

int main ()
{
	int i=0 ,j,n=3,x=1,res=0;/*
	i& j for looping
	n number of elements
	x the number multiplexing to array element
	*/
	int arr[]={9,5,8};

	for (i=0 ;i<n ;i++){
		bubbleSort(arr,i+1);//using bubble sort to sort array after any loop
		for(j=0 ;j<=i;j++)
		{
			res+=arr[j]*x;
			x++;

		}
		x=1;

	}
	printf("res: %d",res);



	return 0;

}
