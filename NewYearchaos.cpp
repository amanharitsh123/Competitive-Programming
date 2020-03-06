#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long int lli;
vector<string> split_string(string);
lli ab(lli x) {
    if(x<0)
        return -1*x;
    else
        return x;
}
// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int min_till_now=*(q.rbegin());
    lli ans=0;
    for (int i=q.size()-2;i>=0 and ans!=-1;i--) 
    {
        if(q[i] > min_till_now )
        {
            int temp=i;
            if(q[i]-i-1 > 2) 
            {
                ans=-1;
            } else
            {
                while( q[temp]>q[temp+1] and temp+1<q.size() )
                {
                swap(q[temp],q[temp+1]);
                ans++;
                temp++;
                }
            }
            
                


        } else
        {
            min_till_now = q[i];
        }
    }
    if(ans == -1) 
    {
        cout<<"Too chaotic"<<endl;
    } else
    {
        cout<<ans<<endl;
    }


}

int  main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
