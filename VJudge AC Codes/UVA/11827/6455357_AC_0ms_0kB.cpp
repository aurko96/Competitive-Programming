#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a%b==0)
    {
        return b;
    }
	return gcd(b,a%b);
}

int main()
{
	int i,j,t,n,a[1000],x,count;
	string s;

	cin>>t;
	getline(cin,s);

	while(t--)
    {
		getline(cin,s);
		istringstream iss(s);
		n=0;

		while(iss>>a[n])
        {
            ++n;
        }
		x = 0;
		for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                x = max(x,gcd(a[i],a[j]));
            }
        }


		cout<<x<<endl;
	}
	return 0;
}
