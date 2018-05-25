#include<bits/stdc++.h>
using namespace std;
class myString{
    int *intAr;
    int size;
    int index;
public:
    myString()
    {
        intAr=new int[10];
        size=10;
        index=0;
    }
    myString(int x)
    {
        intAr=new int[x];
        size=x;
        index=0;
    }
    myString(int x,int ara[100])
    {
        intAr=new int[x];
        size=x;
        for(int i=0;i<size;i++) intAr[i]=ara[i];
        index=size;
    }
    ~myString()
    {
        cout<<"Deleting: "<<intAr<<endl;
        delete intAr;
    }
    void set_data(int x)
    {
       if(index==size) cout<<"Memory Full at size "<<size+1<<endl;
       else if(x<0 || x>255) cout<<"Invalid Input\n";
       else
       {
           intAr[index]=x;
           index++;
       }
    }
    void print_data()
    {
        for(int i=0;i<index;i++) cout<<(char)intAr[i]<<" ";
    }
    void edit_data(int i,int x)
    {
        if((i-1)==size) cout<<"Index out of bounds\n";
        else
        {
            intAr[i-1]=x;
        }
    }
    void concatenate(myString *abc)
    {
        int sz,k=0;
        if(index==0) sz=abc->index;
        else sz=index+1+abc->index;
        intAr=(int *) realloc(intAr,sizeof(int)*sz);
        for(int i=index;i<sz;i++)
        {
            intAr[i]=abc->intAr[k++];
        }
        size=sz;
        index=sz-1;
    }
    void _reverse()
    {
        reverse(intAr,intAr+index);
    }
};
int main()
{
    int n,tot;
    myString str3;
    cout<<"Give the number of values to be scanned: ";
    cin>>tot;
    cout<<"Object with default constructor:\n";
    cout<<"Give ASCII value of the characters as inputs:\n";
    for(int i=0;i<tot;i++)
    {
        cin>>n;
        str3.set_data(n);
    }
    str3.print_data();
    cout<<endl;
    cout<<"Edit element of that object:\n";
    int p,q;
    cout<<"Input index number of the element you want to edit: ";
    cin>>p;
    cout<<"Input ASCII value of the new character: ";
    cin>>q;
    str3.edit_data(p,q);
    str3.print_data();
    cout<<endl;
    cout<<"Object with constructor with parameter as size:\n";
    int x;
    cout<<"Input size of values to be scanned:\n";
    cin>>x;
    myString str(x);
    cout<<"Give ASCII values as inputs:\n";
    for(int i=0;i<x;i++)
    {
        cin>>n;
        str.set_data(n);
    }
    str.print_data();
    cout<<endl<<endl;
    int ara[]={65,66,67,68,69};
    myString str2(5,ara);
    cout<<"Object with constructor parameter with a size and a given array:\n";
    str2.print_data();
    cout<<endl;
    cout<<"Concatenating:\n";
    str.concatenate(&str2);
    str.print_data();
    cout<<endl;
    cout<<"Reversing:\n";
    str._reverse();
    str.print_data();
    cout<<endl;
}
