#include<iostream>
using namespace std;

int main()
{
	int i,j,arr[5]={1,2,3,4,5};
	int temp,size=5;
	cout<<"Original"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(i=0,j=size-1;i<j,j>i;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	cout<<"Reverse Array"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
