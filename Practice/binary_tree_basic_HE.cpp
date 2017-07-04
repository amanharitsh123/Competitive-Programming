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
           {int t,x;
           cin>>t>>x;
           root.data=x;
           int n=2*(t-1);
           char inp[25];
           t--;
           while(t--)
           { cin>>inp;
             node *current=&root;
            for(int i=0;i<strlen(inp);i++)
            { if(inp[i]=='L')
              { if(current->left==NULL)
                { current->left=new node;
                //cout<<"a";
                }
                current=current->left;


              }else
              {if(current->right==NULL)
                { current->right=new node;
                }
                current=current->right;


              }


            }//cout<<"here";
           // int temp;
            cin>>current->data;
           // current->data=temp;
           //  cout<<current->data;
           }
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
           void dia()
           { //int d;
            // cout<<"here";
             //cout<<height(&root)<<endl;
             cout<<diameter(&root)<<endl;




           }
           int diameter(node * cur)
           { if(cur==NULL)
            return 0;
           int lheight=height(cur->left);
            int rheight=height(cur->right);
             int ldia=diameter(cur->left);
              int rdia=diameter(cur->right);
              //cout<<"dia";
              return max(lheight+rheight+1,max(ldia,rdia));





           }





         };
        int main()
        { tree t;
         t.create();
         //cout<<"here 4";
        // t.preorder();
         t.dia();


        }

