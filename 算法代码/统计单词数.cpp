#include<iostream>
using namespace std;
string to_small(string s)
{
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)//´óÐ´×ÖÄ¸
        {
            ans+=s[i]+32;
        }
        else
        {
            ans+=s[i];
        }
    }
    return ans;
}
int main()
{
    string a,s;
    cin>>a;
    getline(cin,s);
    s.clear();
    getline(cin,s);
    int first=0,time=0;
    string tmp="";
    s+=' ';
    a=to_small(a);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            tmp+=s[i];
        }
        else if(s[i]==' '&&tmp.size()>0)
        {
            //cout<<tmp<<" "<<tmp.size()<<" "<<a;
            if(a==to_small(tmp))
            {
                if(time==0)
                    first=i-tmp.size();
                time++;
            }
            tmp.clear();

        }

    }
    if(time==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<time<<" "<<first;
    }
    return 0;
}
