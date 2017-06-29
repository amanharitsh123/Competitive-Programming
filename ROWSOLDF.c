#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isdone(char *);
int main()
{ int t;
int cflag;
long int ans=0,i;
 char * inp=malloc(100000*sizeof(char));
char * current=inp;
 scanf("%d",&t);
while(t--)
{ ans=0;




scanf("%s",inp);


while(!isdone(inp) )
{cflag=0;
current=inp;
for(i=0;i<strlen(inp)-1;i++)
{   if(*(current)=='1'&& *(current+1)=='0')
    { if(cflag==0)
      { ++ans;
      cflag=1;
      }
    *(current)='0';
    *(current+1)='1';
    ++ans;
    }
    else if(*(current)=='1'&& *(current+1)=='1')
     {cflag=0;}
     ++current;
}
if(inp[strlen(inp)-1]=='0')
continue;
}
printf("\n%ld",ans);//end of inner while
}//End of while

}//end of main
int isdone(char *inp)
{
char * current;
int flag=1;
for(current=inp;*(current)!='\0';current++)
{
if(*(current)=='1')
  while(*(current)!='\0')
  { if(*(current)=='0')
    {flag=0;

         break;}
    ++current;

  }
  if(flag==0)
  break;

}

return flag;
}
