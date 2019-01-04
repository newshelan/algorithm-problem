#include<iostream>
using namespace std;
struct light
{
    double leftlen;
    double rightlen;
    double coord;
};
int main()
{
    int n=0;//灯的数量
    cin>>n;
    double interval;//灯之间的距离
    cin>>interval;
    double coverlen[n];//每颗灯泡覆盖的总长度
    light l[n];
    int ans[n];
    for(int i=0;i<n;i++)
        cin>>coverlen[i];
    for(int i=0;i<n;i++)
    {
        ans[i]=0;//初始化
        if(i==0)//第一颗灯泡
        {
            l[i].leftlen=0;
            l[i].rightlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }
        else if(i==n-1)//最后一颗灯泡
        {
            l[i].rightlen=0;
            l[i].leftlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }
        else
        {
            l[i].leftlen=l[i].rightlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }

    }
    ans[0]=1;//默认第一颗灯泡打开,打开赋值1,关闭赋值-1
    for(int i=0;i<n;i++)//从第二颗灯泡开始
    {
        //先算出当前灯泡的亮区的起始位置和结束位置
        double s=l[i].coord-l[i].leftlen;//起始位置
        double en=l[i].coord+l[i].rightlen;//结束位置
        double co=l[i].coord;//灯泡坐标
        //统计在当前灯泡的亮区覆盖范围有没有灯泡，有灯泡的话就关闭亮区内的灯泡
        for(int j=0;j<n;j++)
        {
            if(l[j].coord>s&&l[j].coord<co)//该灯泡在左亮区内,关闭该灯泡
            {
                ans[j]=-1;
            }
            else if(l[j].coord>co&&l[j].coord<en)//该灯泡在右亮区内，关闭该灯泡
            {
                ans[j]=-1;
            }
        }
        //cout<<l[i].leftlen<<","<<l[i].coord<<","<<l[i].rightlen<<endl;
    }

}
