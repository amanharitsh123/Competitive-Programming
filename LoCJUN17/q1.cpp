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
          { lli a,b,m;
           scanf("%lld %lld %lld",&a,&b,&m);
           if(a%m!=0)
           a=a+(m-a%m);
           if(b%m!=0)
           b=b-(b%m);

           a=a/m;
           b=b/m;

           printf("\n%lld",b-a+1);





          }




         }
