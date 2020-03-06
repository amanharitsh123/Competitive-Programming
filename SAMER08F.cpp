##include<iostream>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        cin >> x;
        if(x==0)
            break;
         for(int i = 0; i < x;i++)
         {
            ans += int(pow((x-i),2))
         }
         cout << ans;
    }
}