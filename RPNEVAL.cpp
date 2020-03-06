#include <bits/stdc++.h>
#include <sstream>
#include <stdio.h>
using namespace std;
int main()
{
    vector<double> v;
    
    
    string s,out;
    stringstream ss;
    getline(cin,s);
    ss<<s;
    //float out;
    double a , b;
    while(ss>>out)
    {
        
        //cout << out<<endl;
        if(out == "/")
        {
            if(v.size() < 2)
            {
                cout << "ERROR";
                return 0;
            }
            
            a = *v.rbegin();
            v.pop_back();
            b = *v.rbegin();
            v.pop_back();
            v.push_back(b/a);
        } else if(out == "+")
        {
            if(v.size() < 2)
            {
                cout << "ERROR";
                return 0;
            }
            
            a = *v.rbegin();
            v.pop_back();
            b = *v.rbegin();
            v.pop_back();
            v.push_back(a+b);

        } else if(out == "*")
        {
            if(v.size() < 2)
            {
                cout << "ERROR";
                return 0;
            }
            
            a = *v.rbegin();
            v.pop_back();
            b = *v.rbegin();
            v.pop_back();
            v.push_back(a*b);

        } else if(out == "-")
        {
            if(v.size() < 2)
            {
                cout << "ERROR";
                return 0;
            }
            
            a = *v.rbegin();
            v.pop_back();
            b = *v.rbegin();
            v.pop_back();
            v.push_back(b-a);

        } else 
        {
            stringstream convert(out);
            double aab;
            convert >> aab;
            //cout << aab<<endl;
            v.push_back(aab);
        }
    }

    if(v.size() > 1)
    {
        cout<<"ERROR";
    }else
    {
        //cout << "Priting result for size "<<v.size()<<endl;
        //cout<<setprecision(4)<<*v.rbegin()<<endl;
        printf("%.4lf",*v.rbegin());
    }


}
/*
1 2 3 /
2 3 /
3 4 * /
1 2 4 + - 5 * 7 /
*/