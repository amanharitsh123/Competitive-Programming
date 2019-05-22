#include<stdio.h>
#include<math.h>
int main()
{ double n=0,k=0,inp=0,ans=0;

scanf("%lf %lf",&n,&k);
while(n--)
{ scanf("%lf",&inp);
  if(!inp==0 && fmod(inp,k)==0)
   ans++;








}
printf("%.0lf",ans);
return 0;
}
