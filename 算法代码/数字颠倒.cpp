#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int>ivec;
    while(a!=0)
    {
        ivec.push_back(a%10);
        a=a/10;
    }
    for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();iter++)
        cout<<*iter;
}
