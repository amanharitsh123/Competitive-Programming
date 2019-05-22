#include<stdio.h>
#include<stdlib.h>
long long int ans(long long int);
long long int ismax(long long int n, long long int comp);
int main()
{
    long long int out=0, p,q,i;
    scanf("%lld %lld",&p,&q);
    for(i=p;i<=q;i++)
    { out =out+(ans(i)-1);




    }
    printf("%lld",out);
    return 0;
}
long long int ans(long long int n)
{ int sum=1,flag=0;
    long long int i;
    if(n==1)
        return sum;
    for(i=1;i<n;i++)
    { if(n%i==0 && flag==0 && i!=1)
    {  sum++;
         if(ismax(n,n/i))
         {
        sum=sum +ans(n/i);

    flag=1;}

    }
    else if(n%i==0)
    {
        sum++;
    }
    }
    if(flag==0)
        sum++;

    return sum;
}
long long int ismax(long long int inp,long long int comp)
{ long long int i,k,ans=0,temp=0;
long long int * visited=calloc(inp,sizeof(long long int));
  for(i=1;i<inp;i++)
  { if(inp%i==0)
    { for(k=1;k<i;k++)
    {  if(i%k==0)
       { ++visited[i-1];

       }
    }


    }

  }

  for(i=1;i<inp;i++)
  { if(visited[i-1]!=0)
  { if(visited[i-1]>temp)
  { temp=visited[i-1];
    ans=i;
  }

  }

  }
if(comp==ans)
return 1;
else return 0;


}
