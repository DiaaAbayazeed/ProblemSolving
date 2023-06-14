/*
 ============================================================================
 Name        : User-Friendly.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long hashing(char *arr)
{
	long long res = 0;
	int p = 131;
	long m = 1000000007;
	unsigned int n;
	n = strlen(arr);
	int i;
	
	// Loop through each character in the string
	for (i = 0; i < n; i++)
	{
		// Calculate the hash value using the given formula
		res += (int)arr[i] * pow(p, n - (i + 1));
	}

	return (res % m);  // Return the hash value modulo m
}

int main(void)
{
	long x = 0, z = 0, y = 0;
	int q = 4;
	char arr[4][2][15] = {
		{{"setpassword"}, {"000A"}},
		{{"authorize"}, {"244736787"}}
	};
	char arr1[10] = {0}, arr2[10] = {0};
	int i, j;

	// Iterate over each entry in the array
	for (i = 0; i < q; i++)
	{
		// Check if the first character of the first string is 's'
		if (arr[i][0][0] == 's')
		{
			// Copy the characters from the second string into arr1 and arr2
			for (j = 0; arr[i][1][j] != '\0'; j++)
			{
				arr1[j] = arr[i][1][j];
				arr2[j] = arr[i][1][j];
			}
			
			// Add 'z' to the end of arr2
			arr2[j] = 'z';
			arr2[j + 1] = '\0';
			
			// Calculate the hash values for arr1 and arr2
			x = hashing(arr1);
			y = hashing(arr2);
		}
		// Check if the first character of the first string is 'a'
		else if (arr[i][0][0] == 'a')
		{
			z = atoi(arr[i][1]);  // Convert the second string to an integer
			
			// Check if z is within the range of x and y
			if (x <= z && y >= z)
				printf("1\n");
			else
				printf("0\n");
		}
	}

	return 0;
}