#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[7][2];
    int time=0;
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    int b[7],num=0;
    memset(b,0,sizeof(b));
    for(int i=0;i<7;i++)
    {
        int s=a[i][0]+a[i][1];
        if(s>8)
        {
            if(s>num)
            {
                num=s;//不高兴的最大值
                time=i+1;//不高兴的日期
            }
            b[i]=1;
        }
    }
    int flag=0;
    for(int i=0;i<6;i++)
    {
        if(b[i]==1)
            flag=1;
    }
    if(flag==0)
    {
        cout<<0;
    }
    else
    {
        cout<<time;
    }
    return 0;

}
