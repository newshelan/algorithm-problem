#include<iostream>
#include<cmath>
using namespace std;
int n,k,ans=0;
int x[21];
int is_prime(int i)
{
    if(i==1||i==0)
        return 0;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            return 0;
        }

    }
    return 1;
}
void dfs(int step,int sum,int cnt)//step表示当前选的第几个数,sum代表累加的和，cnt代表累加的数字个数
{
    if(step==n||cnt==k)
    {
        if(is_prime(sum)&&cnt==k)
        {
            //cout<<sum<<endl;
            ans++;
        }

        return;
    }
    dfs(step+1,sum+x[step],cnt+1);
    dfs(step+1,sum,cnt);
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>x[i];
    dfs(0,0,0);
    cout<<ans;
    return 0;
}
