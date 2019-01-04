#include<iostream>
#include<algorithm>
using namespace std;
struct time
{
    int st;
    int en;
};
bool cmp(time a,time b)
{
    return a.en<b.en;
}
int main()
{
    int n;
    cin>>n;
    time a[n];
    for(int i=0;i<n;i++)
        cin>>a[i].st>>a[i].en;
    sort(a,a+n,cmp);
//    cout<<"----------\n";
//    for(int i=0;i<n;i++)
//    {
//        cout<<a[i].st<<" "<<a[i].en<<endl;
//    }
//    cout<<"------------\n";
    int ans=1;
    time tmp=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i].st>=tmp.en)
        {
            ans++;
            tmp=a[i];
        }

    }
    cout<<ans;
}
