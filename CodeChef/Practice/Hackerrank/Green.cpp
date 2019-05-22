#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
bool prime[1000000+1];
void sieve(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers

}
int main()
{ sieve(1000000);
  prime[1]=false;
    int t;
scanf("%d",&t);
int *inp=new int[t];
int *sum=new int[t];
for(int i=0;i<t;i++)
{ scanf("%d",&inp[i]);
    if(i==0)
    if(prime[inp[i]]==true)
    sum[i]=1;
    if(prime[inp[i]]==true)
    {
        sum[i]=sum[i-1]+1;
    }else
    {
        sum[i]=sum[i-1];

    }

}
   int q;
   scanf("%d",&q);
   while(q--)
   { int ans=0;
     int a,b;
     scanf("%d %d",&a,&b);
     if(prime[inp[a-1]]==true && prime[inp[b-1]]==true)
     {ans=sum[b-1]-sum[a-1]+1;}
     else
     {ans=sum[b-1]-sum[a-1];}

       printf("%d\n",ans);
   }
    return 0;
}

