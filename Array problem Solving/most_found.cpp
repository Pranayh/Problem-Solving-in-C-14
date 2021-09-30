#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="daghaabbccaa";
    
    int arr[26];
    
    for(int i=0;i<26;i++)
        arr[i]=0;

    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }

    char ans='a';
    int maxf=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]>maxf)
        {
            maxf=arr[i];
            ans=i+'a';
        }
    }

    cout<<maxf<<" "<<ans;
}