#include<iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double step=2,tmp=0.0;
    int ans=0;
    while(x>tmp)
    {
        tmp+=step;
        step*=0.98;
        ans++;
    }
    cout<<ans;
}
