#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a[n],f[n];
    for(int i=0;i<n;i++)
    {
        f[i]=1;
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                f[i]=max(f[j]+1,f[i]);
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<f[i]<<" ";
}
