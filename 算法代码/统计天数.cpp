#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[i]=1;
    }
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            f[i]=f[i-1]+1;
            if(f[i]>ans)
                ans=f[i];
        }
    }
    cout<<ans;
    return 0;
}
