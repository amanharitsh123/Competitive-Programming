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
         #include <tgmath.h>
         #include <cmath>
         using namespace std;
         typedef vector<lli> vi;
         typedef vector<vi> vvi;
         typedef pair<lli,lli> ii;
         inline void compute(int n);
         #define INF 999999999999999999
         char arr[]={'a','a','c','a','a','c','c','a'};
         inline char invert(char x);
         int main()
         {

          lli t;
          scanf("%lld",&t);
          while(t--)
          { lli inp;
          scanf("%lld",&inp);
          compute(inp);



          }

         }
         inline void compute(int n)
         { lli mirror=log(n)/log(2);
         lli temp=mirror;
         // cout<<mirror<<endl;
         lli diff=n;
         if(pow(2,mirror)!=n && n>16)
        { while(pow(2,mirror)!=8)
         {  diff=diff-pow(2,mirror);
         diff=pow(2,mirror)-diff;
         mirror--;
         //cout<<"a";

         } lli flag=0;
         if(diff>8 )
         {diff=diff-pow(2,mirror);
          diff=pow(2,mirror)-diff;
          mirror--;flag=1;}
          //cout<<"Diff is "<<diff<<endl;
         if(flag==0)
       {// cout<<"inverting "<<diff-1<<endl;
       printf("%c\n",invert(arr[diff-1]));}
         else
         printf("%c\n",arr[diff-1]);
        }
        else if(n<16 and n>8)
        {diff=n-pow(2,mirror);
         diff=pow(2,mirror)-diff;
        printf("%c\n",invert(arr[diff-1]));

        }
        else if(pow(2,mirror)==n)
        printf("a\n");
        else if(n<8)
        printf("%c\n",arr[n-1]);
         }
         inline char invert(char x)
         { if(x=='a')
           return 'c';
           else
           return 'a';


         }
