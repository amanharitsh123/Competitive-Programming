// Solution through Segment trees and Lazy Propagation
#include <bits/stdc++.h>
#include <math.h>

typedef long long int lli;

using namespace std;

vector<string> split_string(string);

lli * tree;
lli * lazy;

// Complete the arrayManipulation function below.

void update(int node, int start, int end1, int l, int r, int val)
{
    // Applying Lazy Nodes Value to the nodes
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];

        if(start != end1)
        {
            lazy[2*node + 1] += lazy[node];
            lazy[2*node + 2] += lazy[node];
        }
        lazy[node] = 0;

    }

    // Handling 3 Cases Now

    // Case 1 : Range is completely Outside the current node range
    if(start > end1 or l > end1 or r < start)
    {
        return;
    }

    // Case 2 : Range is completely Inside the current Node Range
    if(start >= l and end1 <= r)
    {
        tree[node] += val;
        if (start != end1)
        {
            lazy[2*node + 1] += val;
            lazy[2*node + 2] += val;
        }
        return;

    }

    //Case 3 : Range Partially Overlaps with current range
    int mid = (start + end1)/2;
    update(2*node + 1, start, mid, l, r, val);
    update(2*node + 2, mid + 1, end1, l, r, val);
    tree[node] = max(tree[2*node+1] , tree[2*node + 2]);
    //cout<<"tree[node] at node "<<node <<" is "<< tree[node]<<endl<<start<<" "<<end1<<" "<<l<<" "<<r<<" "<<endl;;
}


long arrayManipulation(int n, vector<vector<int>> queries)
{
    // Declaring Tree
    lli x = ceil(log2(n));
    lli size_of_tree = 2*(lli)pow(2,x)-1;
    tree = new lli[size_of_tree+2]();
    lazy = new lli[size_of_tree+2]();
    cout<<tree[2];

    // No need to Construct Tree as we have all 0s in tree

    //Quering Tree
    for( vector<vector<int>>::iterator it = queries.begin(); it != queries.end(); it++)
    {
        update(0, 0 ,(lli)pow(2,x) - 1, (*it)[0] - 1, (*it)[1] - 1,(*it)[2]);
        cout <<(lli)pow(2,x)-1<< " " << (*it)[0] - 1 << " " <<(*it)[1] - 1 << " " << (*it)[2] ;
        //cout<<"Query Successful , Max till now is : "<<tree[0] + lazy[0]<<endl;
    }

    //Returning max
    return tree[0] + lazy[0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

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

/*
5 3
1 2 100
2 5 100
3 4 100
*/
