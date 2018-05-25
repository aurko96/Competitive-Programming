#include<bits/stdc++.h>
#define LL long long
using namespace std;

#define SIZE_N 100000
#define SIZE_P 100000

bool flag[SIZE_N+5];
LL primes[SIZE_P+5];

inline void seive()
{
	int i,j,total=0,val;

	for(i=2;i<=SIZE_N;i++) flag[i]=1;

	val=sqrt(SIZE_N)+1;

	for(i=2;i<val;i++)
       	if(flag[i])
            		for(j=i;j*i<=SIZE_N;j++)
                		flag[i*j]=0;

    	for(i=2;i<=SIZE_N;i++)
       	if(flag[i])
            		primes[total++]=i;

    	//return total;
}


int store_primes[100],freq_primes[100], Total_Prime, ans;
LL store_divisor[10000];
//Very Much Faster Divisor Functionâ�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦â�¦
inline void divisor(LL N)
{
    	int i,val,count;

    	val=sqrt(N)+1;
    	Total_Prime=0;
    	for(i=0;primes[i]<val;i++)
    	{
       	if(N%primes[i]==0)
        	{
            		count=0;
            		while(N%primes[i]==0)
            		{
                		N/=primes[i];
                		count++;
            		}
            		store_primes[Total_Prime]=primes[i];
            		freq_primes[Total_Prime]=count;
            		Total_Prime++;
			val=sqrt(N)+1;     // sqrt again for fast compute.
        	}
    	}
    	if(N>1)
    	{
       	store_primes[Total_Prime]=N;
        	freq_primes[Total_Prime]=1;
        	Total_Prime++;
    	}
}
inline void Generate(int cur,LL num)
{
    int i,val;

    if(cur==Total_Prime)
    {
        store_divisor[ans++]=num;
    }
    else
    {
        val=1;
        for(i=0;i<=freq_primes[cur];i++)
        {
            Generate(cur+1,num*val);
            val=val*store_primes[cur];
        }
    }
}
int main()
{
    	seive();
    	long long n,i;
        int j,z;
        long long sum=0,x,y;
        vector<LL>vect;
        scanf("%lld %lld",&x,&y);
        for(i=x;i<=y;i++)
        {
            n=i;
            if(n==1) continue;
            //LL cnt=0,cnt2=0;
            while(1)
            {
                //cout<<n<<" "<<sum<<endl;
                if(n==1)
                {
                    sum++;
                    break;
                }
                divisor(n);
                ans=0;
                Generate(0,1);
                sort(&store_divisor[0],&store_divisor[ans]);

//                printf("Total No of Divisors: %d\n",ans);
//                for(j=0;j<ans;j++)
//                        printf("%d ",store_divisor[j]);
//                printf("\n");
                vect.clear();
                for(j=0;j<ans-1;j++)
                {
                    vect.push_back(store_divisor[j]);
                   // cout<<vect[j]<<" ";
                }
                if(n==i) z=ans-1;
                else z=ans;
                sum+=z;
                int p=vect.size()-1,mx=0;
                LL gg;
                while(p>=0)
                {
                    gg=vect[p];
                    divisor(gg);
                    ans=0;
                    Generate(0,1);
                    sort(&store_divisor[0],&store_divisor[ans]);
                    if(ans>mx)
                    {
                        mx=ans;
                        n=vect[p];
                    }
                    p--;
                }
                //cout<<" n = "<<n<<endl;
               // n=store_divisor[ans-2];
                //cout<<n<<" "<<sum<<endl;
            }
        }
        printf("%lld",sum);
    	return 0;
}
