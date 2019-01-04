#include<iostream>
using namespace std;
int ans=1;
int mul(int a)
{
    int ans=1;
    while(a)
    {
        ans*=10;
        a/=10;
    }
    return ans;
}
void add(int i,int n,int m)
{
    if(i>=1)
    {
        n=i*m+n;
        m*=10;
        i/=2;
        ans++;
        add(i,n,m);
    }
    else
        return;
}
int main()
{
    int n;
    cin>>n;
    int m=mul(n);
    for(int i=1;i<=n/2;i++)
    {
        add(i,n,m);
    }
    cout<<ans;
}
/*×î¼ò½â·¨
#include<iostream>
#include<string.h>
using namespace std;
int f[1001];
int main()
{
    int n;
    cin>>n;
    memset(f,0,sizeof(f));
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1];
        if(i%2==0)
            f[i]=f[i-1]+f[i/2];
    }
    cout<<f[n];
}
*/
