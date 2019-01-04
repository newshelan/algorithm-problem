#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int tmp=0,ans=0;
    for(int i=0;i<n;i++)
    {
        tmp+=a[i];
        if(tmp==m)
        {
            ans++;
            tmp=0;
            continue;
        }
        else if(tmp>m)
        {
            ans++;
            tmp=0;
            i--;
        }
        if(i==n-1)
        {
            if(tmp<=m)
            {
                ans++;
            }
        }
    }
    cout<<ans;
}
