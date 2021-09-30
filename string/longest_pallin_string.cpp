#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int p=0,q=s.size()-1;

    while(p<q)
    {
        if(s[p]==s[q])
        {
            p++;
            q--;
        }
        else{
            s.erase(s[p]);
            p++;

        }

    }
    cout<<s;
    }

    
	
	return 0;
}