#include<iostream>
#include<algorithm>
using namespace std;
int fun(int a[],int len,int i,int j)
{
    int maxx=2,diff=a[j]-a[i],tmp=a[j];
    for(int k=j+1;k<len;k++)
    {
        if(a[k]-tmp==diff)
        {
            maxx++;
            tmp=a[k];
        }
    }
    return maxx;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=1;
    if(n==1||n==2)
    {
        cout<<n;
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            int k=fun(a,n,i,j);//查找在a中以i俄日第一项，j为第二项的最长的等差数列
            if(k>ans)
                ans=k;
        }
    }
    cout<<ans;
}
