#include<iostream>
using namespace std;

int main()
{
	int i,arr[10]={0,1,2,1,0,0,1,2,1,1};
	int ele,s=0,p=0,v=0;
	cin>>ele;
	
	for(i=0;i<10;i++)
	{
		if(0==arr[i])
			s++;
	}
	for(i=0;i<10;i++)
	{
		if(1==arr[i])
			p++;
	}
	for(i=0;i<10;i++)
	{
		if(2==arr[i])
			v++;
	}
	for(i=0;i<s;i++)
	{
		a[i]=0;
	}
	for(i=s;i<s+p;i++)
	{
		a[i]=1;
	}
	for(i=p;i<10;i++)
	{
		a[i]=2;
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
