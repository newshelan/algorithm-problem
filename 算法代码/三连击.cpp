#include<iostream>
#include<string.h>
using namespace std;
int f(int a,int b,int c,int s[])
{
    while(a)
    {
        s[a%10]++;
        a/=10;
    }
    while(b)
    {
        s[b%10]++;
        b/=10;
    }
    while(c)
    {
        s[c%10]++;
        c/=10;
    }
    for(int i=1;i<=9;i++)
    {
        if(s[i]!=1)
            return 0;//²»Âú×ãÌõ¼þ
    }
    return 1;
}
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                int s[10];
                memset(s,0,sizeof(s));
                if(i!=j&&i!=k&&j!=k)
                {
                    int a=i*100+j*10+k;
                    int b=a*2;
                    int c=a*3;
                    if(f(a,b,c,s))
                    {
                        cout<<a<<" "<<b<<" "<<c<<endl;
                    }

                }
            }
        }
    }
}
