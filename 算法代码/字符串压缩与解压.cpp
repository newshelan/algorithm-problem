#include<iostream>
#include<stdio.h>
#include<string>
#include<cstdio>
#include<istream>
#include<vector>
#include<stdlib.h>
using namespace std;
void cp(string s)
{
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            flag=true;
            int j;
            int sum=2;
            for(j=i+1;j<s.size();j++)
            {
                if(s[j]==s[j+1])
                    sum++;
                    else
                        break;
            }
            cout<<sum<<s[i];
            i=j;
        }
        else
            cout<<s[i];
    }
}
int wei(int num)
{
    int n=0;
    while(num!=0)
    {
        num/=10;
        n++;
    }
    return n;
}
int dig(string s,int in)
{
    string str="";
    for(int j=in;j<s.size();j++)
    {
        if(s[j]!=' ')
        {
            if(s[j]<65||s[j]>122)
            {
                str+=s[j];
            }
            else
                break;
        }
        else
            break;
    }
    return atoi(str.c_str());
}
void dcp(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')//不是空格
        {
            if(s[i]<65||s[i]>122)//也不是字母，那么就是数字
            {
                int sum=dig(s,i);
                //cout<<sum<<endl;
                int j,tmp=wei(sum);
                for(j=0;j<sum;j++)
                    cout<<s[i+tmp];
                    i+=tmp;

            }
            else
                cout<<s[i];
        }
        else
            cout<<s[i];
    }
}
int main()
{
    char c;
    cin>>c;
    string s;
    vector<char>cvec;
    char tmp=cin.get();
    getline(cin,s);
    if(c=='C')
    cp(s);
    else if(c=='D')
    {
        dcp(s);
    }
    //cout<<wei(123);
}
