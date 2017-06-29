#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 long int ans(long int,long int,long int,long int,char *);
int main()
{ int t;
long int l,n,i,out,k,flag;
scanf("%d",&t);

while(t--)
{out=0;flag=0;
scanf("%ld %ld",&l,&n);
char * str=malloc(l*sizeof(char));

scanf("%s",str);



for ( i = 0; i < l; i++ )
{ for ( k = 0; k < n; k++ )
  {
    out=ans(i,k,n,k,str);
    if(out==strlen(str))
    {flag=1;
    printf("\nsafe");
    break;}


  }
if(flag==1)
{ break;
}
}
if(flag==0)
printf("\nunsafe");

}





 }
long int ans(long int i,long int k,long int n,long int l,char *str)
{   char * current=str; long int m=0;
    while((*current)!='\0')
    {
    if((*current)=='R')
      { if(k+1 <=n-1 )
      { k=k+1;
       ++m;
       ++current;
      } else
      {break;}


      }else if((*current)=='L')
      { if(k-1 >=0 )
      { k=k-1;
       ++m;
       ++current;
      } else
      {break;}


      }else if((*current)=='U')
      { if(i-1 >=0 )
      { i=i-1;
       ++m;
       ++current;
      } else
      {break;}



      }else if((*current)=='D')
      { if(i+1 <=l-1 )
      { i=i+1;
       ++m;
       ++current;
      } else
      {break;}


      }

    }

return m;


}
