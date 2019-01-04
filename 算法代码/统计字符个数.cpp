#include<iostream>
using namespace std;
int main()
{
    int ans[128];
    for(int i=0;i<127;i++)
        ans[i]=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        ans[s[i]]++;
    }
    int a=0;
    for(int i=0;i<127;i++)
    {
        if(ans[i]!=0)
            a++;
    }
    cout<<a;
}
