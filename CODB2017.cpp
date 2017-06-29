#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 	long long int t,n,i,j,flag,temp;
	cin>>t;
	while(t--)
	{ flag=0;
      cin>>n;
      temp=n;
     
       for(i=1;i++;1)
         {  if(n%i==0 &&n!=i)
             {  n=n-i;
                if(flag==0)
                 flag=1;
                else if(flag==1)
                 flag=0;

             }
            if(n==i)
            break;  


        }
        if(flag==0)
        {cout<<"\nVISHAL"};
        else
        {cout<<"\nROHIT"};
	}

}
