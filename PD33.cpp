#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 	int k,c,i,j,flag;
	while(1)
	{cin>>c;
	if(c==0)
	break;
	char *arr=new char[201];
	cin>>arr;
	k=1;
	i=0;
	j=0;
	for(i=0;i<c;i++)
		{k=1;flag=0; for(j=i;j<strlen(arr);j=j+c)
			{ if(flag==0)
              {cout<<arr[j];k++;flag=1;}
              else
              {cout<<arr[c*k-i-1];k++;flag=0;}


			}

		}
cout<<endl;
	}

}
