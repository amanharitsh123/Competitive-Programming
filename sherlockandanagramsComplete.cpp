#include <bits/stdc++.h>

using namespace std;

// Applying Linear Probing to resolve Collisons

int ncr(int n,int r)
{
     if(n==r) return 1;
     if(r==1) return n;
     return ncr(n-1,r) + ncr(n-1,r-1);
}


int h(string inp)
{
    long sum =0;
    for (int i=0; i < inp.size(); i++)
    {
        sum = sum + (int) ( ((int)inp[i] % 3001 ) ) % 5051;
        sum = sum % 5051;
    }
    return sum;

}

int areAnagrams (string s1 , string s2)
{
    int arr[26] = {0};

    for(int i=0; i < s1.size(); i++)
    {
        arr[s1[i] - 'a'] += 1;
    }

    for(int i=0; i < s2.size(); i++)
    {
        if (!arr[s2[i] - 'a'])
        {
            return 0;
        }else
        {
            --arr[s2[i] - 'a'];
        }
    }
    return 1;

}

// Complete the sherlockAndAnagrams function below.

int sherlockAndAnagrams(string s) {
    int * arr = new int[5051]();
    vector<string> table(5051);
    int sum = 0;
    // Computing all sub strings
    for(int i = 1; i < s.size(); i++ )
    {
        for (int j = 0; j + i -1< s.size() ; j++)
        {
            for (int x = j + 1; x + i -1< s.size() ; x++)
            if ( areAnagrams(s.substr(j,i) , s.substr(x,i) ))
            {
                cout <<"Between Strings "<< s.substr(j,i) << " " <<s.substr(x,i)<<endl;
                sum++ ;
            }

        }
    }

     return sum;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


