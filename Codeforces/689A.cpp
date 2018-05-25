#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y,z,m,p,q,r;
    char a[100][100];
    a[0][0]='1';
    a[0][1]='2';
    a[0][2]='3';
    a[1][0]='4';
    a[1][1]='5';
    a[1][2]='6';
    a[2][0]='7';
    a[2][1]='8';
    a[2][2]='9';
    a[3][0]=' ';
    a[3][1]='0';
    a[3][2]=' ';
    string s;
    cin>>n;
    cin>>s;
    //n=s.size();
    k=0;
    int cup=0,cdown=0,cleft=0,cright=0,call=0;
    here:
    for(i=0;i<=3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==s[k])
            {
                k++;
                if(i==0 && j==0)
                {
                    cdown++;
                    cright++;
                    //cout<<"p1"<<endl;
                }
                else if(i==0 && j==1)
                {
                    cleft++;
                    cright++;
                    cdown++;
                    //cout<<"p2"<<endl;
                }
                else if(i==0 && j==2)
                {
                    cdown++;
                    cleft++;
                    //cout<<"p3"<<endl;
                }
                else if(i==1 && j==0)
                {
                    cup++;
                    cdown++;
                    cright++;
                    //cout<<"p4"<<endl;
                }
                else if(i==1 && j==1)
                {
                    call++;
                    //cout<<"p5"<<endl;
                }
                else if(i==1 && j==2)
                {
                    cup++;
                    cleft++;
                    cdown++;
                    //cout<<"p6"<<endl;
                }
                else if(i==2 && j==0)
                {
                    cright++;
                    cup++;
                    //cout<<"p7"<<endl;
                }
                else if(i==2 && j==1)
                {
                    call++;
                    //cout<<"p8"<<endl;
                }
                else if(i==2 && j==2)
                {
                    cup++;
                    cleft++;
                    //cout<<"p9"<<endl;
                }
                else if(i==3 && j==1)
                {
                    cup++;
                    //cout<<"p10"<<endl;
                }
                //cout<<i<<" "<<j<<endl;
                goto here;

            }
        }
    }
    cup+=call;
    cdown+=call;
    cright+=call;
    cleft+=call;
    //cout<<"up="<<cup<<endl<<"down="<<cdown<<endl<<"k = "<<k<<endl;
    //cout<<"right="<<cright<<endl<<"left="<<cleft<<endl<<"all="<<call<<endl;
    if(cup>=n || cdown>=n || cleft>=n || cright>=n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
