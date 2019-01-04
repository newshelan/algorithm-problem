#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int len=s.size();
   char ch[len];
   int i,j;
   for(i=0,j=len-1;i<len,j>-1;i++,j--)
   {
       ch[i]=s[j];
   }
   ch[i]='\0';
   cout<<ch;
}
