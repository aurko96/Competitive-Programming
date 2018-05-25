#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[101],str2[101];
    int i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i]>>str2[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(str2[j]>str2[j+1])
            {
                swap(str2[j],str2[j+1]);
                swap(str[j],str[j+1]);
            }
            else if(str2[j]==str2[j+1])
            {
                if(str[j]>str[j+1])
                {
                    swap(str[j],str[j+1]);
                    swap(str2[j],str2[j+1]);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<str[i]<<" "<<str2[i]<<"\n";
    }

}
