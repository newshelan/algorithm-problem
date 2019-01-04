#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int h;
    for(int i=0;i<10;i++)
        cin>>a[i];
    cin>>h;
    int ans=0;
    for(int i=0;i<10;i++)
    {
        if(h>=a[i]||(h+30)>=a[i])
        {
            ans++;
        }
    }
    cout<<ans;
}
