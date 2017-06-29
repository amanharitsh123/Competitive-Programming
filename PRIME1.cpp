#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
void ans(long long int ,long long int );
void sieve(lli,bool *);
bool *comp=new bool[(int)sqrt(1000000000)];

int main()
{ sieve((int)sqrt(1000000000),comp);
long long int t,l,r,i,flag,j;
cin>>t;
 while(t--)
 	{ cin>>l>>r;
      ans(l,r);



 	}


return 0;

}
void sieve(lli n,bool *arr)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    memset(arr, true, n);

    for (lli p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (arr[p] == true)
        {
            // Update all multiples of p
            for (lli i=p*2; i<=n; i += p)
                arr[i] = false;
        }
    }

    // Print all prime numbers

}
void ans(long long int l ,long long int r)
{ lli x;
  bool * arr=new bool[r-l+1];
  memset(arr,true,r-l+1);
  for (lli p=2; p<=(int)sqrt(1000000000) && p<=r; p++)
       if (comp[p])
       { if(l%p!=0)
       x=((l/p)+1)*p;
       else
       x=l;

        for (lli m=x; m<=r; m=m+p)
             if(m/p!=1)
             arr[m-l]=false;
       }
  for(int m=l;m<=r;m++)
  if(arr[m-l]&&m!=1)
  cout<<m<<endl;

}
