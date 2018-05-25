#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


struct suffix
{
    int index;
    char *suff;
};

bool cmp(struct suffix a, struct suffix b)
{
    return strcmp(a.suff, b.suff) < 0? 1 : 0;
}

int *buildSuffixArray(char *str, int n)
{
    struct suffix suffixes[n];

    for (int i=0; i<n; i++)
    {
        suffixes[i].index = i;
        suffixes[i].suff = (str+i);
    }

    sort(suffixes, suffixes+n, cmp);

    int *suffixArr = new int[n];
    for (int i = 0; i < n; i++) suffixArr[i] = suffixes[i].index;

    return  suffixArr;
}


int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        char str[2000];
        cin>>str;
        //getchar();
        int n=strlen(str);
        int *suffixArr = buildSuffixArray(str, n);
        int ara[2000];
        for(int i=0; i<n; i++) ara[i]=suffixArr[i];

        // PRINT SUFFIX ARRAY

//        for(int i=0;i<n;i++) cout<<ara[i]<<" ";
//        cout<<endl;
        set<char>st[1002];
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                st[i].insert(str[j]);
            }
        }
//        for(int i=0; i<n; i++)
//        {
//            cout<<ara[i]<<" = ";
//            for(auto it=st[ara[i]].begin(); it!=st[ara[i]].end(); it++)
//            {
//                cout<<*it<<" ";
//            }
//            cout<<endl;
//        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            cout<<st[ara[x-1]].size()<<"\n";
        }
    }

}
