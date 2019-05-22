//First Implementation of Dijkstra algorithm
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
         class Graph
         { lli vertex;//No. Of vertices
          //vertex and weight pair for every edge
         list< pair<lli,lli> > * adj;//adjency list
         public:
            Graph(lli V)
            {vertex=V;
            adj = new list< ii > [V];}
            //Adding Edge
            void addEdge(lli x,lli y,lli w)
            { adj[x].push_back(make_pair(y,w));
              adj[y].push_back(make_pair(x,w));
            }
            //dijkstra
            void dijkstra(lli src);

         };
         void Graph:: dijkstra(lli src)
         { priority_queue <ii, vector<ii>, greater<ii> > pq;
            vector<lli> dist(vertex,INF);
            pq.push(make_pair(0,src));
            dist[src]=0;
           //cout<<"D active";
            while(!pq.empty())
            { lli u=pq.top().second;
               pq.pop();
               list< pair<lli,lli> >::iterator i;
               for(i=adj[u].begin();i!=adj[u].end();++i)
               { lli v=(*i).first;
                  lli weight=(*i).second;

                  if(dist[v]>dist[u]+weight)
                  {dist[v]=dist[u]+weight;
                     pq.push(make_pair(dist[v],v));


                  }




               }



            }
          for (lli i = 1; i < vertex; ++i)
           printf("%lld ",dist[i]/2);

         }
         int main()
         { int t;
          cin>>t;
          while(t--)
          { lli n,k,x,m,s;
            scanf("%lld %lld %lld %lld %lld",&n,&k,&x,&m,&s);
            Graph g(n+1);
            for(lli i=1;i<=k;i++)
            {
               g.addEdge(0,i,x);
            }
            while(m--)
            { lli a,b,c;
             scanf("%lld %lld %lld",&a,&b,&c);
             g.addEdge(a,b,2*c);


            } //cout<<"calling";
             g.dijkstra(s);
             printf("\n");

          }



         }
/*3
5 4 100 2 3
1 5 50
5 3 160
5 4 100 2 3
1 5 50
5 3 140
8 3 15 7 5
3 4 10
4 5 20
5 6 10
6 1 7
3 7 1000
7 8 50
3 5 1000000000*/
