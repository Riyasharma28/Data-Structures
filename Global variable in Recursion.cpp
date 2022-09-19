#include<iostream>
using namespace std;
int x;
int func(int n)
{
	if(n>0)
	{
		x++;
		return func(n-1)+x;
		
	}
	return 0;
}
int main()
{
	int a =5;
	printf("%d",func(a));
	return 0;
}
