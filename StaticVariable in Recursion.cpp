#include<iostream>
using namespace std;
int func(int n)
{
	if(n>0)
	{
		return func(n-1)+n;
		
	}
	return 0;
	
}
int main()
{
	int a=5;
	printf("%d",func(a));
	return 0;
}
