#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
void ans1( int a, int b);
int main()
{ int t;
  int l,b,ans;
  cin>>t;
while(t--)
{int *mem=new int[10000]();
cin>>l>>b;
ans1(l,b);
}


}
void ans1( int a, int b)
{  int temp=1;
	for(int i=b;i>=1;i--)
	{ if(a%i==0 &&b%i==0)
      { temp=temp*i;
      break;}



	}

cout<<(a/temp)*(b/temp)<<endl;
}

/*
2
10 15
4 6
*/
