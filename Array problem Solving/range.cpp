#include<iostream>
using namespace std;

int main()
{
	int arr[6];
	int i,min,max,range;
	max=min=arr[0];
	
	for(i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<6;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	for(i=0;i<6;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	
	range=max-min;
	
	cout<<range;
	
	
	return 0;
}
