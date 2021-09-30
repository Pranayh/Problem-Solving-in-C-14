#include<iostream>
using namespace std;

int main()
{
	int n,m,i,*x;
	cout<<"Enter wanted Elements:"<<endl;
	cin>>n;
	cout<<"Size Elements:"<<endl;
	cin>>m;
	
	x=new int[m];
	for(i=0;i<m;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<m;i++)
	{
		if(n==x[i])
			cout<<"TROE";
			break;
		
		cout<<"fALSE";
	}
	
	
	return 0;
}
