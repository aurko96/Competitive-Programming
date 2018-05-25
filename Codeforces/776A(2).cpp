#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1[10005],str2[10005],str3,str4;
    int i,j,n,x,y,z;
    cin>>str3>>str4;
    str1[0]=str3;
    str2[0]=str4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str1[i]>>str2[i];
    }
    cout<<str3<<" "<<str4<<"\n";
    for(i=1;i<=n;i++)
    {
        if(str1[i]==str3)
        {
            str3=str2[i];
            //str4=str
            cout<<str3<<" "<<str4<<"\n";

        }
        else if(str1[i]==str4)
        {
            str4=str2[i];
            cout<<str3<<" "<<str4<<"\n";
        }
    }
}
