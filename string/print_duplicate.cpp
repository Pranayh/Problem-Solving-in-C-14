#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="aabbccfffhkluuds";

    int n=s.length();

    int fre[26];

    for(int i=0;i<26;i++)
    {
        fre[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        fre[s[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(fre[i]>1)
        {
            char c=i+'a';
            cout<<c<<" ";
            
        }
    }

}
    