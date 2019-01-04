#include<iostream>
using namespace std;
string a,b;//a表示中序序列，b表示后序序列
void fun(int s1,int e1,int s2,int e2)
{
    cout<<b[e2];
    int i;
    for(i=s1;a[i]!=b[e2];i++);
    if(i!=s1)
        fun(s1,i-1,s2,s2+i-s1-1);
    if(i!=e1)
        fun(i+1,e1,s2+i-s1,e2-1);
}
int main()
{
    cin>>a>>b;
    fun(0,a.size()-1,0,b.size()-1);
}
