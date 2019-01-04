#include<iostream>
using namespace std;
int main()
{
    int T,K;
    cin>>T>>K;
    int mat[K][4];
    int acc=T;
    for(int i=0;i<K;i++)
    {
        cin>>mat[i][0]>>mat[i][1]>>mat[i][2]>>mat[i][3];
    }
    for(int i=0;i<K;i++)
    {
        int n1=mat[i][0],b=mat[i][1],t=mat[i][2],n2=mat[i][3];
        //cout<<"t="<<t<<" acc="<<acc<<endl;
        if(acc==0)
        {
            cout<<"Game Over."<<endl;
                        return 0;
        }
        if(t>acc)
        {
            cout<<"Not enough tokens.  Total = "<<acc<<"."<<endl;
            continue;
        }
        if(!b)//压小
        {
            if(n2<n1)//压中,赢
            {
                acc+=t;
                cout<<"Win "<<t<<"!  Total = "<<acc<<"."<<endl;
            }
            else//没压中，输
                {
                    if(acc==0)
                    {
                        cout<<"Game Over."<<endl;
                        return 0;
                    }
                    else//没输光
                    {
                        if(acc<t)//钱不够
                        {
                            cout<<"Not enough tokens.  Total = "<<acc<<"."<<endl;
                            continue;
                        }
                        else
                            {
                                acc-=t;
                                cout<<"Lose "<<t<<".  Total = "<<acc<<"."<<endl;
                            }
                    }
                }
        }
        else//压大
        {
            if(n2<n1)//没压中，输
            {
                    if(acc==0)//没钱
                    {
                        cout<<"Game Over."<<endl;
                        return 0;
                    }
                    else//有钱
                    {
                        if(acc<t)//钱不够
                        {
                            cout<<"Not enough tokens.  Total = "<<acc<<"."<<endl;
                        }
                        else
                        {
                            acc-=t;
                            cout<<"Lose "<<t<<".  Total = "<<acc<<"."<<endl;
                        }
                    }
            }
            else//压中,赢
            {
                acc+=t;
                cout<<"Win "<<t<<"!  Total = "<<acc<<"."<<endl;
            }
        }
    }
}
