/*
 ============================================================================
 Name        : File Renaming.c
 Author      : diaa
 Version     :
 ============================================================================
 */
/*
 * 1>>make new array equal to array 2
 * 2>>put the deleted element equal to null
 * 3>>check if two elements are equal
 * 4>> check that ale element is equal each other by count%x
 * 5>> increase res by 1
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char arr[]="ccc";
	char arr2[]="cccc";
	int i=0,j=0,count=0,res=0,z=0,k=0;
	int n=sizeof(arr2)-1,x=sizeof(arr)-1;
	k=n-x;
	char arr1 [100]={0};
	while(z<n)
	{
		for(j=0;j<n;j++) arr1[j]=arr2[j];//make new array equal to array 2

		for(i=0;i<k;i++) arr1[z+i]='\0';//put the deleted element equal to null

		i=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr1[j])
			{
				i++;
				count++;
				if(count%x==0)
				{
					res++;i=0;
				}
			}
		}
		z++;count=0;
		if(arr1[n-1]=='\0')break;
	}

	printf("res:%d",res);

	return 0;
}
