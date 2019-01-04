#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    float b=0;
   if(a<=150){//判断小于等于150
        b = a*0.4463;
    }else if(a>=151&&a<=400){//大于150小于等于400
        b += 150*0.4463;
        b += (a-150)*0.4663;
    }else{//不是前两种一定就是大于400
        b += 150*0.4463;
        b += (400-150)*0.4663;
        b += (a-400)*0.5663;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<b;
}
