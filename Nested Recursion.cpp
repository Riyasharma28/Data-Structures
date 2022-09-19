#include<iostream>
using namespace std;
int func(int n)
{
	if(n>100)
	{
		return n-10;
		return func(func(n+11));
	}
}
int main()
{
	int a;
	a = func(95);
	printf("%d",a);
return 0;
}
