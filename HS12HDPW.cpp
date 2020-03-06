#include <bits/stdc++.h>
#include <stdio.h> 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		string inp[x];
		string answer_set;
		for(int i = 0; i < x; i++)
			cin >> inp[i];
		cin >> answer_set;
		
		string ans;
		for(int i = 0; i < x; i++)
		{
			string temp = inp[i];
			int c1 = 0 , c2 = 0;
			for (int j = 0; j < 6; j++)
			{
				c1 = c1 | (temp[j] & 1<<j);
				
				if(temp[j] & 1<< ((j+3)%6))
				{
				//cout << (j+3)%6 <<" bit is set"<<endl;
				c2 = c2 | 1<<j;	
				}
				//bitset<6> aa(c1);
				//bitset<6>bb(c2);
				//cout <<aa << "  "<<bb<<endl;
			}
			ans = ans + answer_set[c1];
			ans = ans + answer_set[c2];
			//cout <<"c1 is "<<c1<<endl;
			//cout <<"c2 is "<<c2<<endl;
		}
		cout <<ans<<endl;


		
		
	}
}


/*
2
2
qwe345 rf3Arg
XSBSRasdew9873465hkldsfsalndfvnfq489uqovkLKJHaeDaae555Sk5asdpASD

3
2S4J5K 111111 lrtb2A
isimgsow45ipfgisd56wfgngdfcdkgc7kKKKkuuJJgfstdygQdWORQADFSLKF2K8

*/