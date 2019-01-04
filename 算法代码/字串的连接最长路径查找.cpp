#include<iostream>
using namespace std;
int wordsort(string a,string b)//a<b返回1，相等返回0，a>b返回-1
{
    int lena=a.size();
    int lenb=b.size();
    int len=lena<lenb?lena:lenb;
    for(int i=0;i<len;i++)
    {
        if(a[i]<b[i])
            return 1;
        else if(a[i]>b[i])
            return -1;
    }
    if(lena<lenb)
        return 1;
    else if(lena>lenb)
        return -1;
    else
        return 0;
}
void lexsort(string s[],int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=len-1;j>i;j--)
        {
            if(wordsort(s[j],s[j-1])==1)//s[j]<s[j-1]
            {
                swap(s[j],s[j-1]);
            }
        }
    }
    for(int i=0;i<len;i++)
        cout<<s[i]<<endl;
}
int main()
{
    int n=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
        lexsort(s,n);

}
