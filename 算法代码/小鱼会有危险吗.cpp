#include<bits/stdc++.h>综合头文件
using namespace std;
int main(){
    double v=7,s,x,l=0;//v速度，s,x如题意
    cin>>s>>x;
    while(l<s-x){//游进探测器
        l+=v;//路程累加
        v*=0.98;//速度减慢
    }
    if(v*0.98<=s+x-l)cout<<'y';
    else cout<<'n';
}
