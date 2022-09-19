#include<iostream>
using namespace std;
//ITERATIVE FUNCTION:
int fib(int n)
{
	int t0=0,t1=1,s=0,i;
	if(n<=1)
	return n;
	for(i=2;i<=n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
//RECURSIVE FUNCTION
	int rfib(int n)
	{
	
		if(n<=1)
		return n;
		else
		return rfib(n-2)+rfib(n-1);
}
//USING MEMOIZATION:
int F[10];
int fib1(int n)
{
	if(n<=1)
{
	F[n]=n;
	return n;
}
else
{
     if 
     (F[n-2]==-1)
 F[n-2]==fib1(n-2);
 
 if(F[n-1]==-1)
 {
 	F[n-1]=(n-1);
 	return F[n-2]+F[n-1];
 }
}
}

int main()
{
	int i;
	for(i=0;i<10;i++)
	F[i]=-1;
	printf("%d \n",fib(6));
	printf("%d \n",rfib(6));
	printf("%d \n",fib1(5));
	
	return 0;
}
