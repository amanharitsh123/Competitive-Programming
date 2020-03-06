#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  
  while(t--)
  {
	int points;
	cin >> points;
	int x1, x2, y1, y2;
	char c;
	cin >> c;
	if(c == 'p')
	{
	  int a,b;
	  cin >> a >> b;
	  x1 = a;
	  x2 = a;
	  y1 = b;
	  y2 = b;
	} else if(c == 'c')
	{
	  int a, b, r;
	  cin >> a >> b >> r;
	  x1 = a + r;
	  y1 = b + r;
	  x2 = a - r;
	  y2 = b - r;
	} else if(c == 'l')
	{
	  int a1 ,a2 ,b1 ,b2;
	  cin >> a1 >> b1 >> a2 >> b2;
	  x1 = (a2 >= a1)?a2:a1;
	  x2 = (a2 >= a1)?a1:a2;
	  y1 = (b2 >= b1)?b2:b1;
	  y2 = (b2 >= b1)?b1:b2;
	}
	--points;
	while(points--)
	{
	  
	cin >> c;
	  if(c == 'p')
	  {
		int a,b;
		cin >> a >> b;
		x1 = max(x1,a);
		x2 = min(x2,a);
		y1 = max(y1,b);
		y2 = min(y2,b);
	  } else if(c == 'c')
	  {
		int a, b, r;
		cin >> a >> b >> r;
		x1 = max(x1,a + r);
		y1 = max(y1,b + r);
		x2 = min(x2,a - r);
		y2 = min(y2,b - r);
	  } else if(c == 'l')
	  {
		int a1 ,a2 ,b1 ,b2;
		cin >> a1 >> b1 >> a2 >> b2;
		int tx1,tx2,ty1,ty2;
		tx1 = (a2 >= a1)?a2:a1;
		tx2 = (a2 >= a1)?a1:a2;
		ty1 = (b2 >= b1)?b2:b1;
		ty2 = (b2 >= b1)?b1:b2;

		x1 = max(x1,max(tx1,tx2));
		x2 = min(x2,min(tx1,tx2));
		y1 = max(y1,max(ty1,ty2));
		y2 = min(y2,min(ty1,ty2));
	  }


	}
	cout<<x2<<" "<<y2<<" "<<x1<<" "<<y1<<endl; 

  }

}
/*

3
1
p 3 3 

2
c 10 10 20
c 20 20 10

1
l 0 0 100 20

*/
