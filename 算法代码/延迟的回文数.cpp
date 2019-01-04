#include<iostream>
using namespace std;
void ali(string &s1,string &s2)
{
    if(s1.size()!=s2.size())
    {
        if(s1.size()>s2.size())
        {
            int len=s1.size()-s2.size();
            for(int i=0;i<len;i++)
            {
                s2='0'+s2;
            }
        }
        else if(s2.size()>s1.size())
        {
            int len=s2.size()-s1.size();
            for(int i=0;i<len;i++)
            {
                s1='0'+s1;
            }
        }
    }
}
string bignumplus(string s1,string s2)
{
    string ans;
    int ad=0;
    for(int i=s1.size()-1;i>-1;i--)
    {
        int a=(s1[i]-'0')+(s2[i]-'0');
        a+=ad;
        ad=a/10;
        a%=10;
        char ch=a+'0';
        ans=ch+ans;
    }
    if(ad)
    {
        char ch=ad+'0';
        ans=ch+ans;
    }
    return ans;
}
bool ispali(string s)
{
    for(int i=0,j=s.size()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
            return false;
    }
    return true;
}
string convert(string s)
{
    string ans="";
    for(int i=s.size()-1;i>-1;i--)
        ans=ans+s[i];
    return ans;
}
int main()
{
    string s1;
    cin>>s1;
    //cout<<convert(s1);
    //ali(s1,s1);
    //cout<<s1<<" "<<s2<<endl;
    //string s=bignumplus(s1,s1);
    //cin>>s;
    //cout<<ispali(s);
    int step=0;
    while(step<10)
    {
        string c=convert(s1);
        string s=bignumplus(s1,c);
        cout<<s1<<" + "<<c<<" = "<<s<<endl;
        if(ispali(s))
        {
            cout<<s<<" is a palindromic number."<<endl;
            return 0;
        }
        else
        {
            s1=s;
            step++;
        }
    }
    cout<<"Not found in 10 iterations."<<endl;
    return 0;
}
