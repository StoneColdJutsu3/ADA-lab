#include<bits/stdc++.h>
using namespace std;

// Function to check if a queen can be placed at row k and column i
bool Place(const vector<int>& x, int k, int i) 
{
    for (int j = 0; j < k; j++) 
    {
        if (x[j] == i || abs(x[j] - i) == abs(j - k)) 
        {
            return false; // Same column or same diagonal
        }
    }
    return true;
}

void NQueens(vector<int>& x, int k, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        if (Place(x, k, i)) 
        {
            x[k] = i; // Place the queen in position (k, i)
            if (k == n - 1) 
            {
                // All queens are placed, print the solution
                for (int j = 0; j < n; j++) 
                {
                    cout << x[j] + 1 << " "; 
                }
                cout << endl;
            } 
            else 
            {
                NQueens(x, k + 1, n); // Recursively place the next queen
            }
        }
    }
}

int main() 
{
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    vector<int> x(n); // Vector to store the column positions of queens
    NQueens(x, 0, n); // Start placing queens from row 0

    return 0;
}