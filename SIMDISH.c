#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ int n,ans=0,i,j,flag=0;
char d1[4][15];
char d2[4][15];
scanf("%d",&n);
while(n--)
{ ans=0;
for(i=0;i<4;i++)
  {scanf("%s",d1[i]);

  if(strlen(d1[i])<2||strlen(d1[i])>10)
    return -1;
  }
for(i=0;i<4;i++)
  {scanf("%s",d2[i]);

  if(strlen(d2[i])<2||strlen(d2[i])>10)
    return -1;

  }
for(i=0;i<4;i++)
{for(j=0;j<4;j++)
   {if(strcmp(d1[i],d2[j])==0)
  {++ans; flag=1;}
  if(flag==1)
  {flag=0;break;}
}

}
  if(ans>=2)
  printf("similar\n");
  else
  printf("dissimilar\n");
}


}
