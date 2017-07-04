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
         class node
         {public:
          int data;
           class node *left,*right;
           node()
           { left=NULL;
           right=NULL;

           }

         };
         class tree
         { node root;

         public:
           void create()
           { int n,q;
            cin>>n>>q;
            n--;
            //node root;
            root.data=1;
            while(n--)
            { void add(&root);



            }






           }
           void add(node * cur)
           { int p,d;
            char pos;
             cin>>p>>d>>pos;
             node *





           }
           void preorder()
           {// cout<<"here 2";
           compute(&root);}

           void compute(node * cur)
           {// cout<<"here 3";
           if(cur!=NULL)
             { compute(cur->left);
               cout<<cur->data<<" ";
               compute(cur->right);

             }


           }
           int height(node * cur)
           { if(cur==NULL)
             {return 0;}
             else
             return 1+max(height(cur->left),height(cur->right));
           }






         };
        int main()
        { tree t;
         t.create();
         //cout<<"here 4";
        // t.preorder();
         t.dia();


        }

