#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int A[5] = { 2,4,6,8,10};
	int *p;
	int *i;
	p = (int *)malloc(5*sizeof(int));
	p[0]=3;
	p[1]=6;
	p[2]=9;
	p[3]=12;
	p[4]=15;
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",A[i]);
		
	}
	printf("\n");
		for(int i=0;i<5;i++)
	{
		printf("%d ",p[i]);
		
	}
	delete []p;
}
