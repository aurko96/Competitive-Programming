#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y,z;
    cin>>n;
    string str,str2;
    cin>>str;
    for(i=0;i<n;i++)
    {
        //cout<<'x'<<endl;
        if(str[i]=='o' && str[i+1]=='g' && str[i+2]=='o')
        {
            //cout<<'p'<<endl;
            str[i]=str[i+1]=str[i+2]='*';
            for(j=i+3;j<n-1;j++)
            {
                if(str[j]=='g' && str[j+1]=='o')
                {
                    str.erase(j,2);
                    j--;
                }
                else break;
            }
            i=j-1;
        }
    }
    cout<<str;
}
