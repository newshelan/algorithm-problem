#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void convert(string s,int index)
{
    char tmp;
    for(int i=index,j=s.size()-1;i<j;i++,j--)
    {
        tmp=s[i];
        s[i]=s[j];
        s[j]=tmp;
    }
    stringstream ss;
    int ans;
    ss<<s;
    ss>>ans;
    cout<<ans<<endl;

}
int main()
{
    string s;
    cin>>s;
    if(s[0]=='-')
    {
        convert(s,1);
    }
    else
        convert(s,0);
}
