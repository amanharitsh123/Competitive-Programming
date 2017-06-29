//Merge Sort
#include <iostream>
         #include <vector>
         #include <string.h>
         #include <sstream>
         #define sz(a) int((a).size())
         #define pb push_back
         #define all(c) (c).begin(),(c).end()
         #define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
         #define present(c,x) ((c).find(x) != (c).end())
         #define cpresent(c,x) (find(all(c),x) != (c).end())
         #include<stdio.h>
         #include<set>
         #include<algorithm>
         #include <numeric>
         #include <stack>
         using namespace std;
         typedef vector<int> vi;
         typedef vector<vi> vvi;
         typedef pair<int,int> ii;
         typedef long long int lli;
         //void max_heapify(lli *inp,lli index,lli n);
         #define INF 99999999999999
         void msort(lli * a,lli p,lli q);
         void mm(lli * a,lli p,lli q,lli r);
         int main()
         { //stack<lli> s;
         lli n;
           cin>>n;
           lli * inp=new lli[n+1]();
           for(lli x=1;x<=n;x++)
           cin>>inp[x];
           msort(inp,0,n);
           for(lli x=1;x<=n;x++)
           cout<<inp[x]<<" ";
          cout<<endl;

         }
        void msort(lli *a,lli p, lli r)
        { if(p<r)
        { //cout<<"here";
        lli q=(r+p)/2 ;
         msort(a,p,q);
         msort(a,q+1,r);
         mm(a,p,q,r);



        }
        }
        void mm(lli * a,lli p,lli q,lli r)
        { lli n1=q-p+1;// cout<<"here2";
          lli n2=r-q;
          lli *l=new lli[n1+1];
          lli* r1=new lli[n2+1];
          for(lli i=0;i<n1;i++)
          {l[i]=a[p+i];}
          for(lli i=0;i<n1;i++)
          {r1[i]=a[q+1+i];}
          l[n1]=INF;
          r1[n2]=INF;
          lli i=0;lli j=0;
          for(lli k=p;k<=r;k++)
          { if(l[i]<=r1[j])
            { a[k]=l[i];
              i++;

            }
            else
            { a[k]=r1[j];
              j++;

            }


          }

        }
