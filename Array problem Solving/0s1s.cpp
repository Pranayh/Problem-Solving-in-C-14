#include<iostream>
using namespace std;

int main()
{
	int i,arr[10]={0,1,2,1,0,0,1,2,1,1};
	int ele,s=0,p=0,v=0;
	cout<<
	for(i=0;i<10;i++)
	{
		cout<<A[i]<<" ";
	}
	
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
		arr[i]=0;
	}
	for(i=s;i<s+p;i++)
	{
		arr[i]=1;
	}
	for(i=p;i<10;i++)
	{
		arr[i]=2;
	}
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
