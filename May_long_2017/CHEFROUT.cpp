#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long int lli;
int main()
{  lli n;
  scanf("%lld",&n);
  while(n--)
  {  int flag=0;
   char *inp=new char[100009];
   int cc=0,cs=0,ce=0;
    scanf("%s",inp);
    if(strlen(inp)!=1)
    for(lli x=0;x<strlen(inp);x++)
    {
    if(inp[x]=='C')
      { if(ce>0 ||cs>0)
      {printf("\nno");flag++;break;
      }else {cc++;}

    }
    if(inp[x]=='E')
      { if(cs>0)
      {printf("\nno");flag++;break;
      }else {ce++;}

    }
    if(inp[x]=='S')
    cs++;
    if(inp[x]=='C' || inp[x]=='E')
    {if(cs>0)
     {printf("\nno");flag++;break;
      }
    }


    }else
    {flag=1;printf("\nyes");}
    if(flag==0  )
    {printf("\nyes");}}}



