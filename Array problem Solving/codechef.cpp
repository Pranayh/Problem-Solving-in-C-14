#include <iostream>
using namespace std;

int main() {
	int t;
	int arr[1000];
	int i=0;
	cin>>t;
	
	while(t--)
	{
		int x,n;
		cin>>n;
		
		while(n!=0)
		{
			x=n%10;
			arr[i]=x;
			n=n/10;
			i++;			
		}
		for(i=0;i<1000;i++)
		{
			cout<<arr[i];
		}
	}
	
	
	
	return 0;
}


