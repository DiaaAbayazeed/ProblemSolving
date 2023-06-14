/*
 ============================================================================
 Name        : Largest Area.c
 Author      : diaa
 Version     :
 Description : Largest Area

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n=2 ,h=4 ,w=4 ;
	int i,z,resh=0,resw=0,res1=0,res2=0;
	int isVertical []={0,1};
	int distance []={3,1};
	int a=0,b=0;

	for (i=0;i<n;i++){
		if(isVertical[i] == 0)
		{
			z=  distance[i] ;
			if(z-h==0){printf("res: 0\n");continue;}//if the distance equal to horizontal the area equal to zero

			a=(z<abs(z-h))?z:abs(z-h);//to save the cutting from the shape
			res1 = (z * w)-resh-resw;
			res2 =(abs(z-h) *w)-resh-resw;// abs()to insure that the result always be true
			if(res1>res2) {
				printf("res: %d\n",res1+(a*b));
				resh +=res2;

			}
			else  {
				printf("res: %d\n",res2+(a*b));
				resh +=res1;

			}

		}

		if(isVertical[i] == 1)
		{
			z=  distance[i];// to insure that the result always be true
			if(z-w==0){printf("res: 0\n");continue;}

			b=(z<abs(z-w))?z:abs(z-w);//z-=a;
			//resw & resh used to cut the old area from the result
			res1 = (z * h)-resw-resh;
			res2 =(abs(z-w) *h)-resw-resh;

			if(res1>res2) {
				printf("res: %d\n",res1+(a*b));
				resh +=res2;

			}
			else  {
				printf("res: %d\n",res2+(a*b));
				resh +=res1;

			}

		}
	}
	return 0;
}
