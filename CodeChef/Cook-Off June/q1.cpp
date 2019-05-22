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
         int main()
         { int t;
          cin>>t;
          while(t--)
          { char inp[3001];
            scanf("%s",inp);
            int ans1=0;
            int flag='U';
            for(int i=0;i<strlen(inp);i++)
            { if(flag!=inp[i])
              {if(inp[i]!='U')
              ans1++;
              flag=inp[i];}


            }
            int ans2=0;
             flag='D';
            for(int i=0;i<strlen(inp);i++)
            { if(flag!=inp[i])
              {if(inp[i]!='D')
              ans2++;
              flag=inp[i];}


            }


          cout<<min(ans1,ans2)<<endl;
          }
         }

