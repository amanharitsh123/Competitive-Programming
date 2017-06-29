#include<stdio.h>
#include<stdlib.h>
int blockf(long long int *,long long int l,long long int r,long long  int k);
int main()
{ int t;
long long int n,q,l,r,k,i,sum=0;
long long int * inp;

scanf("%d",&t);
while(t--)
{scanf("%lld %lld",&n,&q);
 inp=calloc(n,sizeof(long long int));

 for(i=0;i<n;i++)
 { scanf("%lld",&inp[i]);


 }
while(q--)
{
scanf("%lld %lld %lld",&l,&r,&k);


sum= blockf(inp,l,r,k);

printf("\n%lld",sum);


}

}

}
int blockf(long long int *inp,long long int l,long long int r,long long int k)

{long long int i,ans=0,previous=inp[l-1],temp;
ans=0; temp=0;
for(i=l-1;i<=r-1;i++)
{ temp=1;
while(inp[i]==inp[i+1] && i+1<r)
  { ++temp;
    ++i;

  if(i>r-1)
   break;
  }
if(temp>=k)
 {
 ans++;}

}
return ans;
}

