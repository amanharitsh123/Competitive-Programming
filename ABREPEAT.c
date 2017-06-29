#include<stdio.h>
typedef long long int lli;
int main()
{ int t;
lli n,k,ans=0,i,cnta,cntb;
scanf("%d",&t);
while(t--)
{ ans=0;cnta=0;cntb=0;
 scanf("%lld %lld",&n,&k);
 char *arr=malloc(n*sizeof(char));
 scanf("%s",arr);
 for(i=0;i<n;i++)
 { if(arr[i]=='a')
   cnta++;
   else if(arr[i]=='b')
   { cntb++;
    ans=ans+cnta;


   }
 }
 printf("/n%lld",ans*k+(k*(k-1)/2*cnta*cntb));




}
return 0;
}
