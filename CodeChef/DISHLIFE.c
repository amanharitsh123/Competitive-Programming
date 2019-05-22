#include<stdio.h>
#include<stdlib.h>
int isempty(long long int *,long long int);
int main()
{ int t;
long long int n,k,ni,temp,ans=0,a,inp,x=0;
long long int * visited;
    scanf("%d",&t);
    while(t--)
    { scanf("%lld %lld",&n,&k);
    a=n;x=0;
       visited=calloc(k,sizeof(long long int));
       while(n>0)
       {
           if(isempty(visited,k))
       {  ++x;
           scanf("%lld",&ni);

         while(ni>0)
         {
             scanf("%lld",&inp);
            ++visited[inp-1];

            ni--;



         }
       }
       else
       {
           scanf("%lld",&ni);

         while(ni--)
         { scanf("%lld",&inp);

         }
       }
       --n;

       }
if(x!=a)
 printf("\nsome");
else if(x==a && isempty(visited,k))
 printf("\nsad");
else if(x==a && !isempty(visited,k))
 printf("\nall");





    }


}
int isempty(long long int *visited,long long int k)
{   int flag=0;
    long long int i;
    for(i=0;i<k;i++)
    {
        if(visited[i]==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
