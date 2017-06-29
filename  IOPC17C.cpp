#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ int n,t,i,flag=0;
scanf("%d",&t);
while(t--)
{ flag=0;
cin>>n;
int *arr=new int[n];
for(i=0;i<n;i++)
{cin>>arr[i];}

sort(arr,arr+n);
for(i=n-2;i>=0;i--)
{ if(arr[n-1]!=arr[i])
{ flag=1;
cout<<"\n"<<arr[i]%arr[n-1];
break;}


}
if(flag==0)
printf("\n0");}
}
