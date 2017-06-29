#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long int lli;
int main()
{ lli t;
  scanf("%lld",&t);
 	while(t--)
 	{ lli n;lli ans=0,occ=0,temp;
      scanf("%lld",&n);
      lli *arr=new lli[n];
     ans=n;
      for(lli x=0;x<n;x++)
      {scanf("%lld",&temp);
       if(occ<temp)
       { occ=temp;
       }
      }
     printf("\n%lld",ans-occ);

 	}





}
