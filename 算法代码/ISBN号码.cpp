#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>ivec;
    for(int i=0;i<s.size()-2;i++)
    {
       if(s[i]!='-')
        ivec.push_back(s[i]-'0');
    }
    int a=0;
    for(int i=0;i<ivec.size();i++)
    {
        a+=ivec[i]*(i+1);
    }
    if(s[s.size()-1]=='X'&&(a%11)==10)
    {
        cout<<"Right";
        return 0;
    }
    else if((a%11)==(s[s.size()-1]-'0'))
    {
        cout<<"Right";
        return 0;
    }
    if((a%11)==10)
    {
        s[s.size()-1]='X';
    }
    else
    {
        s[s.size()-1]=(a%11)+'0';
    }
    cout<<s;
    return 0;
}
