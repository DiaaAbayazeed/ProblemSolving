/*
 ============================================================================
 Name        : Equalizing.c
 Author      : diaa
 Version     : 
 Copyright   : Your copyright notice
 Description : The code is a C program that uses bubble sort to sort an array and counts the occurrences of the results in another array.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Function to implement bubble sort
void bubbleSort(int arr1[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
				swap(&arr1[j], &arr1[j + 1]);
		}
	}
}

int main(void) {
	
	int div = 3, th = 2;
	int arr1[10][10] = {{12}, {15}, {7}, {5}};
	int i, in = 0, n = 4, j;
	int arr2[16] = {0};
	
	// Bubble sort the array (commented out in the original code)
	// bubbleSort(&arr1, n);

	// Nested loops to iterate over the array
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			arr1[i][j + 1] = arr1[i][j] / div;  // Divide current element by 'div' and store it in the next column
			
			// Increment the count of occurrences in arr2 at the value of arr1[i][j + 1]
			arr2[arr1[i][j + 1]] += 1;
			
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	
	// Print the contents of arr2
	for (i = 0; i <= 16; i++) {
		printf("\t%d", arr2[i]);
	}
	
	return 0;
}

