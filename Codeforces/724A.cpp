#include<bits/stdc++.h>
#define de cout<<"debug"
using namespace std;
int main()
{
    string s[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    string str1,str2;
    int i,j,n,x,y,z,count=0,flag=0;
    cin>>str1>>str2;
    for(i=0;i<7;i++)
    {
        //de<<1;
        if(s[i]==str1)
        {
            x=i;
            break;
        }
    }
    for(j=x;j<7;)
    {
        //de<<2;
        if(s[j]==str2)
        {
            //de<<3<<endl;
            y=i;
            break;
        }
        count++;
        j++;
        j=j%7;
    }
    //cout<<count<<endl;
    //cout<<x<<" "<<y<<endl;
    //z=abs((x%6)-(y%6));
    //cout<<z<<endl;
    if(count==0 || count==2 || count==3)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
