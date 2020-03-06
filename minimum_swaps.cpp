#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr)
{
    vector<int> adj[arr.size()+2];
    vector<int> x=arr;
    sort(x.begin(),x.end());
    map<int,int> lookup;
    for(int i = 0; i < arr.size(); i++)
    {
        lookup.insert(make_pair(x[i],i));
    }


    //Adding Edges
    for(int i = 0; i < arr.size(); i++)
    {

            adj[arr[i]].push_back(arr[lookup[arr[i]]]);
//            cout<<"Added Edge "<<arr[i]<<" - "<<arr[arr[i]-1]<<endl;

    }

    /*for(int i = 0; i <= arr.size(); i++) {
        if(!adj[i].empty())
        cout<<*adj[i].begin();
    }*/

    // Cycle Detection

    vector<int> isvisited( arr.size()+1, 0 );
    int ans=0;
    for( int i = 0; i < arr.size(); i++ )
    {
        int node=1;
        if( !isvisited[arr[i]] )
        {
            if( adj[ arr[i] ].empty() )
                break;

            isvisited[ arr[i] ] = 1;
            int x = *adj[ arr[i] ].begin();

            while( x != arr[i] )
            {
                ++node;
                isvisited[x]=1;
                x=*adj[ x ].begin();

            }


        }
        ans+=node-1;
    }

    //cout<<ans;
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = minimumSwaps(arr);

    fout << res << "\n";

    fout.close();

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

