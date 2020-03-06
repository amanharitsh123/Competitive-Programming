#include<stdio.h>
long int myXOR(long int x, long int y);
int main()
{ long int t,inp,temp=0,j,ans=0,i;
int comp=0;
scanf("%ld",&t);
int *arr=calloc(t,sizeof(int));
for(i=0;i<t;i++)
{ scanf("%ld",&arr[i]);

}

for(i=0;i<t;i++)
{ temp=0;
for(j=comp;j<=i;j++)
{ temp=temp+arr[j];



}
if(i==t-1)

{i=-1;
++comp;}
if(comp==t-1)
break;
printf("%d ",temp);
ans=myXOR(ans,temp);
}

printf("%d",ans);
}
long int myXOR(long int x, long int y)
{
   return (x | y) & (~x | ~y);
}
