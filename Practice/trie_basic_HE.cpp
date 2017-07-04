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

          struct node
          { set < int > s;
            struct node * child[26];
             bool leaf;



          };


          typedef struct node node;


          struct node * create()
          { struct node * pnode=new struct node;
          for (int i=0;i<26;i++)
           {pnode->child[i]=NULL;}
            pnode->leaf=false;
            pnode->s.insert(-1);
            return pnode;


          }
          void insert1(node *root,char inp[],lli w)
          { lli index;
          node *pCrawl = root;
          for(int i=0;i<strlen(inp);i++)
          { index=inp[i]-'a';
           //cout<<w<<endl;
           pCrawl->s.insert(w);
            if(pCrawl->child[index]==NULL)
            { pCrawl->child[index]=create();}
            pCrawl = pCrawl->child[index];


          }
           pCrawl->leaf = true;
          }
          int ans(node *root,char inp[])
          { lli index=0;
           node *crawl=root;
          for(int i=0;i<strlen(inp);i++)
           { index=inp[i]-'a';
             if(crawl->child[index]==NULL)
             return -1;
             else
             crawl=crawl->child[index];



           }
           return *(crawl->s.rbegin());

          }


         int main()
         { lli t,q;
          cin>>t>>q;
          node *root=create();
          char inp[1000009];
           lli w;
          while(t--)
          {
           cin>>inp>>w;

           insert1(root,inp,w);


          }
          cin>>inp;
          printf("%d",ans(root,inp));


         }
         /*2 1
hackerearth 10
hackerrank 9
hacker*/
