#include<bits/stdc++.h>
using namespace std;
class strtype
{
    char *p;
    int len;
public:
    strtype();
    ~strtype();
    void set_(char *ptr);
    void show();

};

strtype::strtype()
{
    p=(char *) malloc(255);
    if(!p)
    {
        cout<<"Allocation error\n";
        exit(1);
    }
    *p='\0';
    len=0;
}

strtype::~strtype()
{
    cout<<"Freeing "<<p<<endl;
    free(p);
}

void strtype::set_(char *ptr)
{
    if(strlen(ptr)>=255)
    {
        cout<<"String too big\n";
        return;
    }
    //strcpy(p,ptr);
    p=ptr;
    cout<<p<<endl<<endl;
    len=strlen(p);
}

void strtype::show()
{
    cout<<p<<" length: "<<len<<endl;
}

int main()
{
    strtype s1,s2;
    s1.set_("This is a test.");
    s2.set_("I like C++.");

    s1.show();
    s2.show();
}
