#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,w;
    cin>>w>>n;
    int a[n];//´æ¼ÍÄîÆ·
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,cmp);
    int num=0,flag=0,tmp=0;
    //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
    //cout<<"\n";
    for(int i=0,j=n-1;i<=j;)
    {
        if(i==j)
        {
            num++;
            break;
        }
       if(a[i]+a[j]<=w)
       {
           num++;
           i++;
           j--;
       }
       else
       {
           num++;
           i++;
       }

    }
    cout<<num;
    return 0;
}

