#include<iostream>
using namespace std;
int main()
{
    int n=0,tmp=0;
    cin>>n;
    tmp=n;
    int ans[10];
    for(int i=0;i<10;i++)
        ans[i]=0;
    while(n)
    {
        int k=n%10;
        ans[k]++;
        if(ans[k]==1)
            cout<<k;
        n/=10;
    }
}
