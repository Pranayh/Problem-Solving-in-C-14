#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="234456";
    
    sort(s.begin(),s.end(), greater<int>());

    cout<<s;
    

}