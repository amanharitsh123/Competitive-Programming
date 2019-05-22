#include<iostream>
#include<string.h>
using namespace std;
int main()
{ int n,mid,i,flag;
cin>>n;
while(n--)
{flag=0;
 char inp[1000];
int *p=new int[26]();
int *p2=new int[26]();
cin>>inp;
mid=strlen(inp)/2;
for(i=mid-1;i>=0;i--)
{++p[inp[i]-'a'];



} if(strlen(inp)%2==0)
{for(i=mid;i<strlen(inp);i++)
{++p2[inp[i]-'a'];



}
}else
{ for(i=mid+1;i<strlen(inp);i++)
{++p2[inp[i]-'a'];



}




}
for(i=0;i<26;i++)
{ if(p[i]!=p2[i])
  { flag=1;break;              }




}

if(flag==1)
cout<<"\nNO";
else if(flag==0)
cout<<"\nYES";
}

}
