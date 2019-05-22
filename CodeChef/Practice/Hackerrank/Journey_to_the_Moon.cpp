//Number of nodes in a connected component in a graph
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
         long long int cal(vector <int> * adj,int n);
         inline long long int dfs(lli i,vector <int> * adj,lli  n,bool *look);
         #define INF 999999999999999999
int main()
{

 lli n,p;
cin>>n>>p;
vector <int> adj[n];

for(int i=0;i<p;i++)
{ int u,v;
 cin>>u>>v;
 adj[u].push_back(v);
 adj[v].push_back(u);


}
cal(adj,n);



}
long long int cal(vector <int> * adj,int n)
{ long long int ans=0;
vector<int> v(n);
vector<int> sum(n);
int index=0;
bool look[n+1];
memset(look,false,n+1);
long long int non=0;//no of nodes
for(int i=0;i<n;i++)
{ if(look[i]==false)
   {look[i]=true;
   non=dfs(i,adj,n,look);
   if(index==0)
   sum[index]=non;
   else
   sum[index]=sum[index-1]+non;
   v[index++]=non;
   }

}
for(int i=0;i<index;i++)
ans=v[i]*(sum[index-1]-sum[i])+ans;
cout<<ans<<endl;


}
inline long long int dfs(lli i,vector <int> * adj,lli  n,bool *look)
{ long long int ans=1;//cout<<"in DFS\n";
stack<int> st;
st.push(i);
look[i]=true;
lli temp;
while(!st.empty())
{ temp=st.top();
st.pop();
vector<int>::iterator it=adj[temp].begin();
while(it!=adj[temp].end())
{if(look[*it]==false)
{ ans++;//cout<<"DFS IS "<<ans<<endl;

st.push(*it);look[*it]=true;        }++it;
}
}
//cout<<"DFS IS "<<ans;
return ans;
}
