#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    
    
    int p=0,q=n-1;
    while(p<q)
    {
        swap(arr[p],arr[q]);
        p++;
        q--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time= O(n)  Space= O(1)