#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ex[n][4];
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
            cin>>ex[i][j];
    }
    int ch[69]={0};
    ch[64]=1,ch[65]=2,ch[66]=3,ch[67]=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ex[i][j][2]=='T')
            {
                int index=ex[i][j][0];
                //cout<<index<<endl;
                ans.push_back(ch[index-1]);
            }
        }
    }
    for(vector<int>::iterator iter=ans.begin();iter!=ans.end();iter++)
    {
        cout<<*iter;
    }

}
