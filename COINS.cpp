//using LOOK_UP Table
//Solution by amanharitsh
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
long long int * memory=new long long int[1000000]();
long long int res(long long int);
int main()
{ long long	int t,n,i,j,flag,temp;
	 while(scanf("%lld",&t)!=EOF)
   {  temp=res(t);
      printf("%lld\n",temp);
   }

}
long long int res(long long int a)
{ long long int p;
	if(a<12)
		return a;

	if(a==12)
		return 13;
    if( a<1000000)
    if(memory[a]!=0)
    return memory[a];

  p=res(a/2)+res(a/3)+res(a/4);
  if(a<1000000)
  memory[a]=p;
  return p;
}
