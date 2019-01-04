#include<iostream>
#include<algorithm>
using namespace std;
struct line
{
    int ai;//×ó¶Ëµã
    int bi;//ÓÒ¶Ëµã
    int ci;//¼ÛÖµ
};
int line_cover(line a,line b)
{
    //判断两条线段是否覆盖
    if(a.bi>b.ai&&a.bi<b.bi)
        return 0;
    if(b.bi>a.ai&&b.bi<a.bi)
        return 0;
    if(a.ai>=b.ai&&a.bi<=b.bi)
        return 0;
    if(b.ai>=a.ai&&b.bi<=a.bi)
        return 0;
    return 1;
}
bool cmp(line a,line b)
{
    return a.ai<b.ai;
}
int main()
{
    int n=0,ans=0;
    cin>>n;
    line l[n];
    int f[n];
    for(int i=0;i<n;i++)
    {
        cin>>l[i].ai>>l[i].bi>>l[i].ci;
    }
    sort(l,l+n,cmp);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<l[i].ai<<" "<<l[i].bi<<" "<<l[i].ci<<endl;
        cout<<"\n";
    f[0]=l[0].ci;
    for(int i=1;i<n;i++)
    {
        f[i]=l[i].ci;
        for(int j=0;j<i;j++)
        {

            if(line_cover(l[j],l[i]))
            {
                f[i]=max(f[i],f[j]+l[i].ci);
            }

                if(f[i]>ans)
                    ans=f[i];
        }
    }
    //cout<<ans;
    for(int i=0;i<n;i++)
        cout<<f[i]<<" ";
}
