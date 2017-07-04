#include <iostream>
         #include <vector>
         #include <string.h>
         #include <sstream>
         typedef unsigned long long int lli;
         #define sz(a) lli((a).size())
         #define pb push_back
         #define all(c) (c).begin(),(c).end()
         #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
         #define present(c,x) ((c).find(x) != (c).end())
         #define cpresent(c,x) (find(all(c),x) != (c).end())
         #include <stdio.h>
         #include <set>
         #include <algorithm>
         #include <numeric>
         #include <stack>
        #include <list>
        #include <queue>
         #define MOD 1000000007
         using namespace std;
         typedef vector<lli> vi;
         typedef vector<vi> vvi;
         typedef pair<lli,lli> ii;

         #define INF 999999999999999999
         int main()
         { lli t;
          scanf("%lld",&t);
          while(t--)
          { lli n,s;
          scanf("%lld %lld",&n,&s);
          lli *arr=new lli[n];
          for(lli i=0;i<n;i++)
          {scanf("%lld",&arr[i]);}
          sort(arr,arr+n);
          lli sum=0;
          lli flag=0;
          for(lli i=0;i<n;i++)
          {if(sum+(n-i)*arr[i]==s)
           {printf("%lld\n",arr[i]);
           flag=1;break;}
           else
           sum=sum+arr[i];}
           if(flag==0)
           printf("-1\n");



          }


         }
