#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,ans=0;
    cin>>n>>m;
    int num[m],s[m];
    for(int i=0;i<m;i++)
    {
        cin>>num[i];
        s[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        s[num[i]-1]++;
        //cout<<"第"<<num[i]-1<<"列有"<<s[num[i]-1]<<"个方块"<<endl;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]>0)
                flag++;
        }
        if(flag==n)
        {
            ans++;
            //cout<<"ans:"<<ans<<endl;
            for(int j=0;j<n;j++)
                s[j]--;
        }
    }
    cout<<ans;
}
