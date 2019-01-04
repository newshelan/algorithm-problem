#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<int>ivec;//存储0-20000的所有质数
int step=0,cnt=0,num=0,n;
int is_prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
void get_prime()
{
    for(int i=2;i<=20000;i++)
    {
        if(is_prime(i))
            ivec.push_back(i);
    }
}
int main()
{
    cin>>n;
    get_prime();//先算出0-到20000的所有质数
    for(int i=0;i<ivec.size();i++)
    {
        for(int j=0;j<ivec.size();j++)
        {
            for(int k=0;k<ivec.size();k++)
            {
                if(ivec[i]+ivec[j]+ivec[k]==n)
                {
                    cout<<ivec[i]<<" "<<ivec[j]<<" "<<ivec[k];
                    return 0;
                }

            }
        }
    }

}
