#include<stdio.h>
int main()
{ int t,l,b,i,tempp=0,tempe=0;
scanf("%d",&t);
while(t--)
{ i=1;tempp=0;tempe=0;
scanf("%d %d",&l,&b);
for(i=1;1;i++)
{ if(i%2==0)
  { tempp=tempp+i;
   if(tempp>b)
   {
   printf("\nLimak");
  break;}
  }else
  {tempe=tempe+i;
  if(tempe>l)
   {printf("\nBob");
  break;
  }}


}
}


}
