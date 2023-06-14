/*
 ============================================================================
 Name        : MaxSumimizing.c
 Author      : diaa
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int maxElement(int n, int maxSum, int k)
{
    if(n==1) return maxSum;
    int right =k;
    int left =k;
    int count = 1;
    int limitRight = n-1;

    while(n <= maxSum && (left > 0 || right < limitRight)){

        n+= right - left +1; if(left>0) left--; if(right < limitRight) right++; count++;}

        if(n<maxSum) count += (maxSum-n)/(right - left +1) +1;

        return count-1;

}
int main(void) {

	int n=4,MaxSum=6,k=4,x=0,z=0,res=0;//,r=0



	printf("res: %d",maxElement(n,MaxSum,k));

	return 0;
}
