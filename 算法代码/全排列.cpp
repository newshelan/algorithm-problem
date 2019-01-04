#include<iostream>
#include<vector>
using namespace std;
void fun(vector<int>ivec,int cursor,int rear)
{
    if(cursor==rear)
    {
        for(int i=0;i<ivec.size();i++)
            cout<<ivec[i]<<" ";
            cout<<"\n";
    }
    else
    {
        for(int i=cursor;i<=rear;i++)
        {
            swap(ivec[cursor],ivec[i]);
            cout<<"½»»»ÔªËØºó:"<<endl;
            for(int j=0;j<ivec.size();j++)
            {
                cout<<ivec[j]<<" ";
            }
            cout<<"\n";
            fun(ivec,cursor+1,rear);
            swap(ivec[i],ivec[cursor]);
        }
    }
}
int main()
{
    vector<int>ivec;
    for(int i=0;i<3;i++)
    {
        ivec.push_back(i+1);
    }
    fun(ivec,0,ivec.size()-1);
}
