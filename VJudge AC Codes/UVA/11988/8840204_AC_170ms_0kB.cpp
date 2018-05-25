#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<char>dq;
    stack<char>qq;
    stack<char>st;
    string str;
    int i,j,n,x,y,z;
    while(cin>>str)
    {
        dq.clear();
        while(!st.empty()) st.pop();
        while(!qq.empty()) qq.pop();
        int cnt=0;
        x=0;
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='[')
            {
                cnt++;
                if(x==0)
                {
                    while(!st.empty())
                    {
                        char ch=st.top();
                        st.pop();
                        dq.push_front(ch);
                    }
                }
                else if(x==1)
                {
                    while(!st.empty())
                    {
                        char ch=st.top();
                        st.pop();
                        qq.push(ch);
                        //dq.push_back(ch);
                    }
                    while(!qq.empty())
                    {
                        char ch=qq.top();
                        qq.pop();
                        //cout<<ch<<"\n";
                        dq.push_back(ch);
                    }
                }
                x=0;
            }
            else if(str[i]==']')
            {
                cnt--;
                if(cnt<0) cnt=0;
                if(x==0)
                {
                    while(!st.empty())
                    {
                        char ch=st.top();
                        st.pop();
                        dq.push_front(ch);
                    }
                }
                else if(x==1)
                {
                    while(!st.empty())
                    {
                        char ch=st.top();
                        st.pop();
                        qq.push(ch);
                        //dq.push_back(ch);
                    }
                    while(!qq.empty())
                    {
                        char ch=qq.top();
                        qq.pop();
                        //cout<<ch<<"\n";
                        dq.push_back(ch);
                    }
                }
                x=1;
            }
            else if(cnt>0)
            {
                st.push(str[i]);
            }
            else
            {
                while(!st.empty())
                {
                    char ch=st.top();
                    st.pop();
                    dq.push_front(ch);
                }
                dq.push_back(str[i]);
            }
        }
        if(x==0)
        {
            while(!st.empty())
            {
                char ch=st.top();
                st.pop();
                dq.push_front(ch);
            }
        }
        else if(x==1)
        {
            while(!st.empty())
            {
                char ch=st.top();
                st.pop();
                qq.push(ch);
                //dq.push_back(ch);
            }
            while(!qq.empty())
            {
                char ch=qq.top();
                qq.pop();
                //cout<<ch<<"\n";
                dq.push_back(ch);
            }
        }
        for(auto it=dq.begin();it!=dq.end();it++)
        {
            cout<<*it;
        }
        cout<<"\n";
        str.clear();
    }
}
