#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s,tmp="";
    int falg=1;
    vector<string>svec;
    getline(cin,s);
    //cout<<s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            tmp+=s[i];
        }
        if(s[i]==' '&&tmp!="")
        {
            //cout<<tmp<<" ";
            svec.push_back(tmp);
            tmp.clear();
        }
    }
    svec.push_back(tmp);
    for(int i=svec.size()-1;i>-1;i--)
    {
        cout<<svec[i]<<" ";
    }
}
