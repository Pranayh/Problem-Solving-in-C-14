#include<iostream>
using namespace std;

int main()
{
	int a=12,b=24,i;
	int max=1;
	for(i=1;i<=a;i++)
	{
		if(a% i==0 & b%i==0)
		{
			if(max<i)
			{
				max=i;
			}
		}
	}
	cout<<max;
 } 
