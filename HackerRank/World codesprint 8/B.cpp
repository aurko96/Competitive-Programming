#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,x,y,z;
    vector<LL>vect;
    vector<LL>::iterator it;
    cin>>n;
    LL p=-1;
    for(i=0;i<n;i++)
    {
        cin>>z;
        if(z==p) continue;
        p=z;
        vect.push_back(z);
    }
   // for(i=0;i<vect.size();i++) cout<<vect[i]<< " ";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        j=0;
        LL high=vect.size()-1,low=0,mid=0;
        //cout<<"start = "<<mid<<" "<<high<<" "<<low<<endl;
        while(low<=high)
        {
            mid=(low+high)/2;
            //cout<<"mid = "<<mid<<endl;
            if(mid>=0 && mid<=vect.size()-1)
            {
                if(y<=vect[mid] && y>=vect[mid+1])
                {
                     j=1;
                     //cout<<"hello\n";
                    if(y==vect[mid])
                    {
                        cout<<mid+1<<"\n";
                        break;
                    }
                    else
                    {
                        cout<<mid+2<<"\n";
                        break;
                    }
                }
            }
            if(y>vect[mid]) high=mid-1;
            else low=mid+1;
        }
        //cout<<"m = "<<mid<<"y = "<<y<<endl;
        if(j){}
        else if(y>vect[mid]) cout<<mid+1<<"\n";
        else if(y<vect[mid]) cout<<mid+2<<"\n";
    }
}


/*  10
    100 100 100 50 50 50 40 11 10 0
    13
    0 0 1 10 11 12 50 51 70 100 100 150 200  */
