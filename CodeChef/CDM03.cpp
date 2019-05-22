#include<iostream>
using namespace std;
int main()
{  int t,a,b;
cin>>t;
while(t--)
{cin>>a>>b;
if(a%10==0)
cout<<endl<<"0";
else
switch(a%10)
{case 1:
    cout<<endl<<'1';
break;
case 2:
    switch(b%4)
    {case 0:
    cout<<endl<<'6';
    break;
    case 1:
    cout<<endl<<'2';
    break;
    case 2:
    cout<<endl<<'4';
    break;
    case 3:
    cout<<endl<<'8';
break;}
break;
case 3:
    switch(b%4)
    {case 0:
    cout<<endl<<'1';
    break;
    case 1:
    cout<<endl<<'3';
    break;
    case 2:
    cout<<endl<<'9';
    break;
    case 3:
    cout<<endl<<'7';
break;}
break;
case 4:
switch(b%2)
    {case 1:
    cout<<endl<<'4';
    break;
    case 0:
    cout<<endl<<'6';
break;}
break;
case 5:
    cout<<endl<<'5';
break;
case 6:
    cout<<endl<<'6';
    break;
case 7:
    switch(b%4)
    {case 0:
    cout<<endl<<'1';
    break;
    case 1:
    cout<<endl<<'7';
    break;
    case 2:
    cout<<endl<<'9';
    break;
    case 3:
    cout<<endl<<'3';
    break;}
    break;
case 8:
    switch(b%4)
    {case 0:
    cout<<endl<<'6';
    break;
    case 1:
    cout<<endl<<'8';
    break;
    case 2:
    cout<<endl<<'4';
    break;
    case 3:
    cout<<endl<<'2';
    break;}
    break;
case 9:
    switch(b%2)
   { case 0:
    cout<<endl<<'1';
    break;
    case 1:
    cout<<endl<<'9';
    break;
    }
    break;
}
}



}
