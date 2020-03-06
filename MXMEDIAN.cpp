#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{ lli t;
  scanf("%lld",&t);
  while(t--)
  	{ lli n;
  	scanf("%lld",&n);
      lli * arr=new lli[2*n];
      for(lli i=0;i<2*n;i++)
      {scanf("%lld",&arr[i]);}
      sort(arr,arr+2*n);
      cout<<arr[n+((n+1)/2)-1]<<endl;
      for(lli i=0;i<n;i++)
      { cout<<arr[i]<<" ";
        cout<<arr[n+i]<<" ";




      }
      cout<<endl;

  	}

}


/*3
1
1 2
3
1 2 3 4 5 6
3
1 3 3 3 2 2*/
