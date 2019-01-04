#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void spiltstr(string s)
{
    vector<string>svec;
    string tmp="";
    //tmp+=s[0];
    //cout<<s<<endl;;
    int i;
    for(i=1;i<=s.size();i++)
    {
        tmp+=s[i];
        if(i%8==0)
        {
            cout<<"tmp:"<<tmp<<endl;
            svec.push_back(tmp);
            tmp.clear();
        }
    }
    cout<<"tmp1:"<<tmp<<"  tmp1的长度:"<<tmp.size()<<endl;
    if(tmp.size()<8)
    {
        cout<<"要加的0的个数:"<<8-tmp.size()<<endl;
        int len=8-tmp.size();
        for(int j=0;j<len;j++)
        {
            //cout<<"j="<<j<<" ";
            tmp=tmp+"0";
        }
        cout<<"tmp2:"<<tmp<<endl;
        svec.push_back(tmp);
        tmp.clear();
    }
}
int main()
{
    string tmp,s;
    cin>>tmp;
    for(int i=0;i<tmp.size();i++)
        s[i+1]=tmp[i];
    spiltstr(s);
}
