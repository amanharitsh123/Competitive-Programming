#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 long int ans(long int,long int,long int,char **,char *);
int main()
{ int t;
long int l,n,i,out,k;
scanf("%d",&t);

while(t--)
{out=0;
scanf("%ld %ld",&l,&n);
char * str=malloc(l*sizeof(char));
char **inp = (char**) calloc(n, sizeof(char*));
scanf("%s",str);
for ( i = 0; i < n; i++ )
{
    inp[i] = (char*) calloc(n, sizeof(char));
}
for ( i = 0; i < n; i++ )
{
    scanf("%s",inp[i]);
}

for ( i = 0; i < n; i++ )
{ for ( k = 0; k < strlen(inp[i]); k++ )
  { if(inp[i][k]=='.')
    {
    out=out^ans(i,k,n,inp,str);

    }
  }

}
printf("\n%ld",out);

}





 }
long int ans(long int i,long int k,long int n,char **inp,char *str)
{   char * current=str; long int m=0;
    while((*current)!='\0')
    {
    if((*current)=='R')
      { if(k+1 <=n-1 && inp[i][k+1]!='#')
      { k=k+1;
       ++m;
       ++current;
      } else
      {break;}


      }else if((*current)=='L')
      { if(k-1 >=0 && inp[i][k-1]!='#')
      { k=k-1;
       ++m;
       ++current;
      } else
      {break;}


      }else if((*current)=='U')
      { if(i-1 >=0 && inp[i-1][k]!='#')
      { i=i-1;
       ++m;
       ++current;
      } else
      {break;}



      }else if((*current)=='D')
      { if(i+1 <=n-1 && inp[i+1][k]!='#')
      { i=i+1;
       ++m;
       ++current;
      } else
      {break;}


      }

    }

return m;


}
