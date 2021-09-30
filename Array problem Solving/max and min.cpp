#include<iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	int i,min,max;
	max=min=arr[0];
	
	for(i=0;i<5;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	for(i=0;i<5;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	
	cout<<"max:"<<max<<endl<<"min:"<<min;
	
	
	return 0;
}
