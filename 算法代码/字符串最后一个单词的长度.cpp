#include<iostream>
#include<algorithm>
#include<time.h>
#include<vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int>ivec;
    int tmp;
    for(int i=0;i<a;i++)
    {
        cin>>tmp;
        ivec.push_back(tmp);
    }
    sort(ivec.begin(),ivec.end());
    for(int i=0;i<a;i++)
    {
        if(i==0||i==a-1)
            cout<<ivec[i]<<endl;
        if(i>=1&&i<a-1)
        {
            cout<<ivec[i]<<endl;
            if(ivec[i]==ivec[i+1])
            {
                i++;
            }
        }
    }
}
