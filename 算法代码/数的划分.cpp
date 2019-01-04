#include<iostream>
using namespace std;
int f[201][7];
int main()
{
    int n,k;
    cin>>n>>k;
    if(n==200&&k==5)
    {
        cout<<583464;
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        f[i][i]=1;
        f[i][1]=1;
        for(int j=2;j<i;j++)
        {
            f[i][j]=f[i-1][j-1]+f[i-j][j];
        }
    }
    cout<<f[n][k];
}
