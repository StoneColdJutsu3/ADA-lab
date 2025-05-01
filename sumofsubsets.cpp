#include<bits/stdc++.h>
using namespace std;

void SumOfSub(vector<int>& w, int s, int m, vector<int>& x, int k, int r) 
{

    if (s == m) 
    {
        for (int i = 0; i < k; ++i) 
        {
            if (x[i] == 1) 
            {
                cout << w[i] << " ";  
            }
        }
        cout << endl;
        return;
    }
    
    // If sum exceeds m or if there are no more elements to include, stop recursion
    if (s > m || k == w.size()) 
    {
        return;
    }

    // Include the current element and move forward
    x[k] = 1;  // Mark current element as included
    SumOfSub(w, s + w[k], m, x, k + 1, r - w[k]);

    // Exclude the current element and move forward
    x[k] = 0;  // Mark current element as excluded
    SumOfSub(w, s, m, x, k + 1, r - w[k]);
}

int main() 
{
    vector<int> w = {3, 34, 4, 12, 5, 2}; 
    int m = 9;  
    vector<int> x(w.size(), 0);
    int r =60;  
    SumOfSub(w, 0, m, x, 0, r);  
}