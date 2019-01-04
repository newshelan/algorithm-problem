#include<iostream>
using namespace std;
int n,b[21],sum,num;
string a[21];
char c;
int dfs(char c,string s)
{
    if(sum>num)
        num=sum;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            if(a[i][j]==c)
            {
                bool flag=1;
                for(int k=j,index=s.size()-1;k>-1,index>-1;k--,index--)
                {
                    if(a[i][k]!=s[index])
                    {
                        flag=0;//没有共同部分
                    }
                }
                if(flag&&b[i]<2)
                {
                    //可以拼接
                    sum+=a[i].size()-j-1;//j代表共同部分的长度
                    b[i]++;
                    dfs(a[i][a[i].size()-1],a[i]);
                    sum-=a[i].size()-j-1;
                    b[i]--;
                }

            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>c;
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==c)
        {
            b[i]++;
            sum+=a[i].size();
            dfs(a[i][a[i].size()-1],a[i]);
            sum-=a[i].size();
            b[i]--;
        }
    }
    cout<<num;
}
