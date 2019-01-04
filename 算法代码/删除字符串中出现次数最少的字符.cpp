#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[128],flag=1;
    for(int i=0;i<128;i++)
        a[i]=0;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    flag=a[s[0]];
    //cout<<"flag:"<<flag<<endl;
    for(int i=0;i<128;i++)
    {
        if(a[i]!=0&&a[i]<flag)
            flag=a[i];
    }
    //cout<<"flag:"<<flag<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(a[s[i]]>flag)
            cout<<s[i];
    }
}
