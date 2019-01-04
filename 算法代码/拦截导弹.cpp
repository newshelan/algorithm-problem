#include<iostream>
using namespace std;
int main()
{
    int a[21];
    int index=0;
    int f[21],g[21];
    int ans1=1,ans2=1;
    while(cin>>a[index])
    {
        g[index]=f[index]=1;
        index++;
    }
    for(int i=0;i<index;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                f[i]=max(f[i],f[j]+1);
                ans1=max(ans1,f[i]);
            }
            else
                {
                    g[i]=max(g[i],g[j]+1);
                    ans2=max(ans2,g[i]);
                }
        }
    }
    for(int i=0;i<index;i++)
        cout<<g[i]<<" ";
    cout<<"\n"<<ans1<<"\n"<<ans2<<endl;
}
