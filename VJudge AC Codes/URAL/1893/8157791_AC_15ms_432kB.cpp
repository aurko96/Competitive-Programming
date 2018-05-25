#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,n,x,y,z;
    cin>>str;
    n=str.size();
    if(n==2)
    {
        if(str[0]>='1' && str[0]<='2')
        {
            if(str[1]=='A' || str[1]=='D') cout<<"window\n";
            else if(str[1]=='B' || str[1]=='C') cout<<"aisle\n";
        }
        else if(str[0]>='3' && str[0]<='9')
        {
            if(str[1]=='A' || str[1]=='F') cout<<"window\n";
            else if(str[1]>='B'&& str[1]<='E') cout<<"aisle\n";
        }
    }
    else if(n==3)
    {
        x=((str[0]-'0')*10)+(str[1]-'0');
        //cout<<x<<endl;
        if(x>=10 && x<=20)
        {
            if(str[2]=='A' || str[2]=='F') cout<<"window\n";
            else if(str[2]>='B'&& str[2]<='E') cout<<"aisle\n";
        }
        else if(x>=21 && x<=65)
        {
            if(str[2]=='A'||str[2]=='K') cout<<"window\n";
            else if(str[2]=='C'||str[2]=='D'||str[2]=='G'||str[2]=='H') cout<<"aisle\n";
            else cout<<"neither\n";
        }
    }
    //cout<<endl;
    //main();
}
