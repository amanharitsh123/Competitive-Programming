#include<stdio.h>
#include<stdlib.h>
int * multiply(int *arr,int n,int *m);
int main()
{
int m=0;

 int n,inp,i;
 scanf("%d",&n);
 if((n>0)&&(n<=100))
 while(n--)
 { scanf("%d",&inp);
 int * arr=malloc(200*sizeof(int));
 m=0;
 arr[0]=1;
   for(i=1;i<=inp;i++)
      arr=multiply(arr,i,&m);
if(inp!=0&&inp!=101)
{ printf("\n");
for(i=m;i>=0;i--)
printf("%d",arr[i]);
free(arr);
 }}
return 0;



}
int * multiply(int *arr,int n,int *m)
{   int temp=0;
int x=0,i;
for(i=0;i<=*m;i++)
{ x=arr[i]*n+temp;
  arr[i]=x%10;
  temp=x/10;
}
while(temp!=0)
{  arr[i++]=temp%10;
   temp=temp/10;




}
*m=--i;
return arr;
}
