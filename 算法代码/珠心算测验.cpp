#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int f[n],ans=0;
    memset(f,0,sizeof(f));
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]==a[k]&&f[k]==0)
                {
                    ans++;
                    f[k]=1;
                }
            }
        }
    }
    cout<<ans;
}
