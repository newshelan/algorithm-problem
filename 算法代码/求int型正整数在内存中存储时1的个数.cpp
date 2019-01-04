#include<iostream>
using namespace std;
int main()
{
    int n=0,cnt=0;
    cin>>n;
    while(n)
    {
        //cout<<n%2;
        if(n%2==1)
        cnt++;
        n/=2;
    }
    cout<<cnt;
}
