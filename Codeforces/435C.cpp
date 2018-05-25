#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,map<int,int> > mp;
    int i,j,k,n,x,y,z,ara[1005];
    cin>>n;
    int mx=0,mn=1e9,val=0,val2=0,mx2=0;
    for(i=0;i<n;i++) cin>>ara[i];
    for(i=0;i<n;i++)
    {
        if(i%2==1) val-=ara[i];
        else val+=ara[i];
        val2+=ara[i];
        mx=max(mx,val);
        mn=min(mn,val);
        mx2=max(mx2,val2);
    }
    //cout<<mx<<" "<<mn<<endl;
    int row,col;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            j=1;
            while(j<=ara[i])
            {
                mp[-j][j]=1;
                j++;
            }
            row=-(j-1);
            col=j-1;
        }
        if(i%2==0 && i!=0)
        {
            j=row-1;
            k=col+1;
            row-=ara[i];
            col+=ara[i];
            while(j>=row && k<=col)
            {
                mp[j][k]=1;
                j--;
                k++;
            }
        }
        else if(i%2==1)
        {
            j=row;
            k=col+1;
            row+=ara[i];
            col+=ara[i];
            while(j<=row && k<=col)
            {
                mp[j][k]=2;
                j++;
                k++;
            }
        }
    }
    int p,q;
    if(mn<0) p=-mn-1;
    else p=-1;
    q=-mx;
    //cout<<q<<" "<<p<<" "<<mx2<<endl;
    for(i=q;i<=p;i++)
    {
       // cout<<i<<" "<<p<<" ";
        for(j=1;j<=mx2;j++)
        {
            //cout<<mp[i][j];
            if(mp[i][j]==0) cout<<' ';
            if(mp[i][j]==1) cout<<'/';
            if(mp[i][j]==2) cout<<'\\';
        }
//        if(i!=-mn-1) cout<<"\n";
        if(i!=p) cout<<"\n";
    }
}
