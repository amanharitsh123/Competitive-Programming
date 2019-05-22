#include<stdio.h>
#include<stdlib.h>
int check( long int,int *);
int main()
{int t;
long int l,r,ans=0,i;
scanf("%d",&t);
int *inp=(int *)malloc(10*sizeof(int));
while(t--)
{ans=0;
scanf("%ld %ld",&l,&r);
for(i=0;i<=9;i++)
{scanf("%d",&inp[i]);
}
for(i=l;i<=r;i++)
{ if(check(i,inp))
  { ans++;

  }


}
printf("\n%ld",ans);
}
}
int check( long int num,int *inp)
{ int flag=1,i=0;
int *visited=malloc(10*sizeof(int));
while(num)
{ ++visited[num%10];
num=num/10;

}
for(i=0;i<10;i++)
{ if(visited[i]==inp[i])
   flag=0;

}

return flag;

}
