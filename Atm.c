#include<stdio.h>
int main()
{ int n;
  float amt;
scanf("%d %f",&n,&amt);
if(amt>=(n+0.50) && n%5==0)
printf("%.2f",amt-n-0.5);
else
printf("%.2f",amt);
return 0;
}
