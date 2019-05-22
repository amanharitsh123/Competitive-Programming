#include <iostream>
#define MOD 1000000007
#include<math.h>
using namespace std;
typedef long long int lli;
int main()
{ lli t;
	cin>>t;
	while(t--)
   { lli n;
   	cin>>n;
   	lli * inp=new lli[n+1];
    for(lli x=0;x<=n;x++)
    	cin>>inp[x];
    lli ans=0;
    lli temp=0;
    for(int i=0;i<=n-1;i++)
   	 	{ for(int j=i+1;j<=n;j++)

           {
            if(i!=0)
           	{temp=inp[i]%MOD*(lli)pow(2,i-1)%MOD*inp[j]%MOD*(lli)pow(2,n-j)%MOD;
           	}
           	else
           	{temp=inp[i]%MOD*1*inp[j]%MOD*(lli)pow(2,n-j)%MOD;
           	}
           	ans=(ans%MOD+temp%MOD)%MOD;


           }



   		}
    cout<<(2*ans)%MOD<<endl;
   }


}
