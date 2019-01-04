#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long getnum(int i,int j,string s){

    long long num=0;

    for(int k=i;k<=j;k++)

        num=num*10+s[k]-'0';

    return num;

}
int main(){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    long long f[n][n][k+1];
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
            f[i][j][0]=getnum(i,j,s);
    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//            cout<<f[i][j][0]<<" ";
//        cout<<"\n";
//    }
    for(int k0=1;k0<=k;k0++)
    {
        for(int i=0;i<n-k0;i++)
        {
            for(int j=i+k0;j<n;j++)
            {
                for(int r=i;r<j;r++)
                {
//                    cout<<"f["<<i<<"]"<<"["<<j<<"]"<<"["<<k0<<"]="<<f[i][j][k0]<<endl;
//                    cout<<"f["<<i<<"]"<<"["<<r<<"]"<<"["<<k0-1<<"]="<<f[i][r][k0-1]<<"*"
//                    <<"f["<<r+1<<"]"<<"["<<j<<"]"<<"["<<0<<"]="<<f[r+1][j][0]<<"\n--------------------\n";
                    f[i][j][k0]=max(f[i][j][k0],f[i][r][k0-1]*f[r+1][j][0]);

                    //cout<<"i="<<i<<" j="<<j<<" r="<<r<<" k="<<k0<<" "<<f[i][j][k0]<<endl;
                }
            }
        }
    }
    cout<<f[0][n-1][k];
}
