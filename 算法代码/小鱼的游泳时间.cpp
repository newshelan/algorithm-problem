#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int st=a*60+b;
    int en=c*60+d;
    int time=en-st;
    int e,f;
    e=time/60;
    f=time%60;
    cout<<e<<" "<<f;
    return 0;
}
