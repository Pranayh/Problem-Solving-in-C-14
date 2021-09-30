#include<iostream>
#include<algorithm>
using namespace std;

int i;

void kthsmallest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	
	cout<<"kth Smallest:"<<arr[k-1];
	
}

void kthLargest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	
	for(i=n-1;i>0;i--)
	{
		if(k==i)
			cout<<arr[i];
			break;
	}
	
}
int main()
{
	int arr[]={3,4,2,6,1,5,4};
	int n=7;
	int kth;
	cin>>kth;
	
	kthsmallest(arr,n,kth);
	kthLargest(arr,n,kth);
}

