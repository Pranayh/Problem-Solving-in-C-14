#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n=s.length();
    int x;
    cout<<" What do u want Upper Or Lower case Transform: "<<endl;
    cout<<"1. Upper  2. Lower"<<endl;
            
    cin>>x;
    if(x==2){
        for(int i=0;i<n;i++)
    {
        if(s[i]<90)
        {
            s[i]=s[i]+32;
        }
    }

    }
    else{
        for(int i=0;i<n;i++)
    {
        if(s[i]>90)
        {
            s[i]=s[i]-32;
        }
    }
    }

    // We can use here , Transform() function also:
    string sp="adhjagjhGGhDas";
    transform(sp.begin(),sp.end(),sp.begin(),:: toupper); // for lower : use tolower
    
    cout<<s<<endl;
    cout<<sp;
}