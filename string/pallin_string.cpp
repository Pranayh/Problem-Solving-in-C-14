#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n=a.size();
    if(a.size()==0) return 1;
    if(a.size()==1) return 1;
    

    string b;
    
    for(int i=0;i<n;i++)
    {
        char c=a[i];

        if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9'){
            if(c>='A' && c<='Z'){
                c=((char)(c+32));
            }

            b.push_back(c);
        }
    }
    int x=0;
    int p=0,q=b.size()-1;

    while(p<q)
    {
        if(b[p]==b[q])
        {
            p++;
            q--;
        }
        else{
            x=1;
            cout<<"0";
            break;
        }

    }
    if(x!=1){
        cout<<"1";}
    
}