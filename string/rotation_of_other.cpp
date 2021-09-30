#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="AACD";
    string s2="ACDA";

    string temp = s1.append(s1);
    cout<<temp<<endl;

    int x=temp.find(s2);
    
    if(x>0)
    {
        cout<<"True : Rotation is Posible";
    }
    else{
        cout<<"False: Rotation is not posible";
    }

}