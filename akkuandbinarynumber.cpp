#include<bits/stdc++.h>
using namespace std;
typedef unsigned long lli;

//Ciel

int just_lower(vector<lli>& arr , lli target)
{
    int lo = 0;
    int hi = arr.size() - 1;

    while(lo < hi)
    {
        
        int mid = (lo + hi)/2;
        //cout <<lo<<" "<<hi<<" "<<mid<<endl;
        if(arr[mid] == target)
            return mid;
        
        if(arr[mid] > target)
        {
            if(mid + 1 <=hi and arr[mid + 1] <= target)
            {
                return mid + 1;
            } else
            {
                lo = mid + 1;
            }

        } else
        {
            if(arr[mid - 1] > target )
            {
                return mid;
            }

            hi = mid - 1;
        }

    }
    
    return hi;
    
}



int just_higher(vector<lli>& arr , lli target)
{
    int lo = 0;
    int hi = arr.size() - 1;

    while(lo < hi)
    {
        
        int mid = (lo + hi)/2;
        //cout <<lo<<" "<<hi<<" "<<mid<<endl;
        if(arr[mid] == target)
            return mid;
        
        if(arr[mid] < target)
        {
            if(mid - 1 >=lo and arr[mid - 1] >= target)
            {
                return mid - 1;
            } else
            {
                hi = mid - 1;
            }

        } else
            if(arr[mid + 1] < target and arr[mid] > target)
            {
                return mid;
            }
            else lo = mid + 1;
        }

       return lo;
}
    
   

int main()
{
    vector<lli> table;
    for(int i = 60; i >=0;i--)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            for(int k = j -1; k >= 0; k--)
            {
                lli x = lli((1UL<<i));
                lli y = lli((1UL<<j));
                lli z = lli(((1UL<<k)));
                x = x | j | k;
                table.push_back((1UL<<i) | (1UL<<j) | (1UL<<k));
            }
        }
    }
    // for(int i = 0; i < table.size();i++)
    // {
    //     cout << table[i]<<endl;
    // }


    // Applying Binary Search

    int t;
    cin >> t;
    while(t--)
    {
        lli  l ,r;
        cin >> l >> r;
        //cout << table[just_lower(table , l , 1) + 1] <<" "<<table[just_lower(table , r , 0)]<<endl;
            //int x =just_higher(table , l);
        //cout << "Target is "<<l<<" Index " <<x << " Value "<<table[x]<<endl;
        
        //cout << table[x]<<endl;
        
        cout << just_higher(table , l) - just_lower(table , r) + 1<<endl;
        //cout << lower_bound(table.rbegin(),table.rend(),r) - upper_bound(table.rbegin(),table.rend(),l) +1<<endl;
    }
}

//1
//4 31283