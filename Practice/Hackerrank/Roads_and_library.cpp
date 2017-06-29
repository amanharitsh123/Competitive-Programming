#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
typedef long long int lli;
using namespace std;
long long int cal(vector <int> * adj,int n,lli cl,lli cr);
inline long long int dfs(lli i,vector <int> * adj,lli n,bool *look);
int main()
{ int t;
cin>>t;
while(t--)
{ lli n,m,cl,cr;
cin>>n>>m>>cl>>cr;
vector <int> adj[n+1];
 for(int i=1;i<=n;i++)
 {adj[i].push_back(i);}
for(int i=0;i<m;i++)
{ int u,v;
 cin>>u>>v;
 adj[u].push_back(v);
 adj[v].push_back(u);


}
if(cl<cr)
{ long long int temp=cl*n;
printf("%lld\n",temp);}
else
{long long int ans=cal(adj,n,cl,cr);
printf("%lld\n",ans);
}
}



}
long long int cal(vector <int> * adj,int n,long long int cl,long long int cr)
{ long long int ans=0;
bool look[n+1];
memset(look,false,n+1);
long long int non=0;
for(int i=1;i<=n;i++)
{ if(look[i]==false)
   {look[i]=true;
   non=dfs(i,adj,n,look);
   ans=ans+(non-1)*cr+cl;}

}
return ans;
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
