#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n=0,k=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    int ans1=0,tmp=0;
    vector<int>ivec;
    for(int i=0;i<n;i++)
    {
        if(t[i]==0)//唤醒
        {
            for(int k=0;k<i;k++)
            {
                if(t[k]==1)
                    ans1+=a[k];
            }
            cout<<"开始唤醒:";
            for(int j=i;j<i+k&&j<n;j++)
            {
                cout<<a[j]<<" ";
                tmp+=a[j];
            }
            cout<<"ans1:"<<ans1<<" tmp:"<<tmp<<"总结果:"<<ans1+tmp<<endl;
            ivec.push_back(tmp+ans1);
            tmp=0;
            ans1=0;
        }
        cout<<"\n";
    }
    sort(ivec.begin(),ivec.end(),cmp);
    //for(int i=0;i<ivec.size();i++)
        //cout<<ivec[i]<<" ";
    //cout<<ivec[0];
}
