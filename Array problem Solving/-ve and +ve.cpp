#include<iostream>
using namespace std;

int main()
{
	int i,arr[10]={-1,2,3,4,5,-6-7,9,5,8};
	int ele,s=0,p=0;
	for(i=0;i<10;i++)
	{
		if(0>arr[i])
			s++;
	}
	
	for(i=0;i<10;i++)
	{
		if(0<arr[i])
			p++;
	}
	for(i=0;i<s;i++)
	{
		if(0>arr[i])
			cin>>arr[i];
	}
	
	for(i=s;i<10;i++)
	{
		if(0<arr[i])
			cin>>arr[i];
	}
	
	cout<<"After:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
