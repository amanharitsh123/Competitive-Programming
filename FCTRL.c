#include<stdio.h>
#include<math.h>
int main()
{ double n=0,x=0,i=0,t=0,ans=0;

    scanf("%lf",&x);
while(x--)
{    ans=0;
     scanf("%lf",&n);
     for(i=1;pow(5,i)<=n;i++)
     {
         ans=ans+(int)(n/pow(5,i));
     }
     printf("\n%.0lf",ans);
}

}
