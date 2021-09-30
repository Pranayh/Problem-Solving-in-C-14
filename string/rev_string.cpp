#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin>>s;
    int n=s.size();
    int p=0,q=n-1;
    while(p<q)
    {
        swap(s[p],s[q]);
        p++;
        q--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    return 0;
}

// Time= O(n)  Space= O(1)