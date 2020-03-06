        #include<stdio.h>
        int main()
        {
        long int t,n,i,a[1000001]={0};
        scanf("%ld",&t);
        for(i=0;i<t;i++)
        {
        scanf("%d",&n);
        a[n]++;
        }
        for(i=0;i<=1000000;i++)
        while(a[i]>0)
        {
        printf("%ld\n",i);
        a[i]--;
        }
        return 0;
        }
