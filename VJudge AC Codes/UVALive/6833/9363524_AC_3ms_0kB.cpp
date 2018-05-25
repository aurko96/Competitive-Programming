#include<bits/stdc++.h>
using namespace std;
string str;
int LR()
{
    int x,y=0;
    char ch;
    ch='$';
    y=str[0]-'0';
    for(int i=0;i<str.size();i++)
    {
        if(i%2==0)
        {
            x=str[i]-'0';
            if(ch=='+')
            {
                y+=x;
            }
            else if(ch=='*')
            {
                y*=x;
            }
        }
        else ch=str[i];
    }
    return y;
}
int val(char ch)
{
    if(ch=='+') return 1;
    if(ch=='*') return 2;
}
int prec()
{
    stack<char>st,exp;
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]))
        {
            exp.push(str[i]);
            continue;
        }
        else
        {
            if(!st.empty())
            {
                char ch=st.top();
                int x,y;
                if(val(str[i])<=val(ch))
                {
                    while(val(str[i])<=val(ch))
                    {
                        exp.push(ch);
                        st.pop();
                        if(st.empty()) break;
                        ch=st.top();
                    }
                    st.push(str[i]);
                }
                else st.push(str[i]);

            }
            else st.push(str[i]);
        }
    }
    while(!st.empty())
    {
        exp.push(st.top());
        st.pop();
    }
    string ss;
    while(!exp.empty())
    {
        ss+=exp.top();
        exp.pop();
    }
    reverse(ss.begin(),ss.end());
    stack<int>num;
    for(int i=0;i<ss.size();i++)
    {
        if(isdigit(ss[i]))
        {
            num.push(ss[i]-'0');
            continue;
        }
        int a,b;
        a=num.top();
        num.pop();
        b=num.top();
        num.pop();
        if(ss[i]=='+') num.push(a+b);
        if(ss[i]=='*') num.push(a*b);
    }
    return num.top();


}
int main()
{
    while(cin>>str)
    {
        int n;
        cin>>n;
        int x;
        x=LR();
       // cout<<x<<endl;
        int y;
        y=prec();
       // cout<<y<<endl;
        if(n==x && n==y) cout<<"U\n";
        else if(n==x) cout<<"L\n";
        else if(n==y) cout<<"M\n";
        else cout<<"I\n";
        str.clear();
    }
}
