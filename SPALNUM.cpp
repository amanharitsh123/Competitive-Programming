#include<iostream>
typedef long int li;
using namespace std;
int ispalin(long int l);
int main()
{li t,l,r,sum=0,i;
cin>>t;
while(t--)
	{ sum=0;
	cin>>l>>r;
		for(i=l;i<=r;i++)
      { if(ispalin(i))
        {sum=sum+i;}


      }
     cout<<sum<<endl;



	}



}
int ispalin(long int l)
{ long int temp=0,temp1=l; ;
  while(1)
  { temp=temp*10+(l%10);
    l=l/10;

   if(l==0)
    break;
  }
 if(temp1==temp)
 	{ return 1;}
 else
 	return 0;
}
