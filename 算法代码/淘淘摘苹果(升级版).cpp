#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int *p,int *q)
{
    if(p[0]==q[0])
    {
        return p[1]<q[1];
    }
    else return p[1]<q[1];
}
int main()
{
    int n,s;
    cin>>n>>s;
    int a,b;
    cin>>a>>b;
    int **x=new int*[n];
    for(int i=0;i<n;i++)
    {
        x[i]=new int[2];
        cin>>x[i][0]>>x[i][1];
    }
    sort(x,x+n,cmp);
//    cout<<"after sort:"<<endl;
//        for(int i=0;i<n;++i)
//    {
//        cout<<x[i][0]<<" "<<x[i][1]<<endl;
//    }
//    cout<<"-----------------"<<endl;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s>=x[i][1])
        {
            if((a+b)>=x[i][0])//ÄÜÕªµ½Æ»¹û
            {
                //cout<<x[i][0]<<" "<<x[i][1]<<endl;
                ans++;
                s-=x[i][1];
            }
        }

    }
    cout<<ans;
//    for(int i=0;i<n;++i)
//    {
//        cout<<x[i][0]<<" "<<x[i][1]<<endl;
//    }
    return 0;
}
