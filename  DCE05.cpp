#include<iostream>
using namespace std;
int main()
{ int t;
long int inp,temp;
cin>>t;
while(t--)
{ temp=4;
cin>>inp;
while(1)
{ if(temp*2>inp)
  {  break;}

else
temp=temp*2;
}
cout<<endl<<temp;
}

}
