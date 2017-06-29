#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
bool isSubsetSum(int arr[],int n,int sum);
int main()
{ int n,t,i,flag=0,inp,j,temp;
scanf("%d",&t);
while(t--)
{ flag=0;
cin>>n>>inp;
int *arr=new int[n];
for(i=0;i<n;i++)
{cin>>arr[i];}
if(isSubsetSum(arr,n,inp)==true)
{printf("\nYES");}
else
{printf("\nNO");}

}}
bool isSubsetSum(int arr[],int n,int sum)
{
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   if (arr[n-1] > sum)
     return isSubsetSum(arr, n-1, sum);

   return isSubsetSum(arr, n-1, sum) ||
                        isSubsetSum(arr, n-1, sum-arr[n-1]);

}
