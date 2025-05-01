#include<bits/stdc++.h>
using namespace std;

int n; // Number of vertices
int m; // Number of colors

vector<vector<int>> G;
vector<int> x;
vector<string> colorNames = {"", "Red", "Green", "Blue"};        // Names for the colors (index 0 is unused)

bool isSafe(int k, int c) 
{
    for (int j = 0; j < n; ++j) 
    {
        if (G[k][j] == 1 && x[j] == c) 
        {
            return false; 
        }
    }
    return true;
}

void mColoring(int k) 
{
    for (int c = 1; c <= m; ++c) 
    {
        if (isSafe(k, c)) 
        {
            x[k] = c; 
            if (k == n - 1) 
            {
                cout << "Solution: ";
                for (int color : x) 
                {
                    cout << colorNames[color] << " ";
                }
                cout << endl;
            } 
            else 
            {
                mColoring(k + 1);
            }

            x[k] = 0;                   //Undo the assignment for current vertex to try a different color.
        }
    }
}

int main() 
{
    n = 4;
    m = 3;
    G = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };

    // Initialize color array with 0 (no color)
    x = vector<int>(n, 0);
    mColoring(0);
}