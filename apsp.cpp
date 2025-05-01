#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX
#define V 4 

void APSP(vector<vector<int>>& cost) 
{
    vector<vector<int>> A = cost; 
    for (int k = 0; k < V; k++) 
    {
        for (int i = 0; i < V; i++) 
        {
            for (int j = 0; j < V; j++) 
            {
                if (A[i][k] != INF && A[k][j] != INF) 
                {  
                    A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
                }
            }
        }
    }

    cout << "Shortest distances between all pairs:"<<endl;
    for (int i = 0; i < V; i++) 
    {
        for (int j = 0; j < V; j++) 
        {
            if (A[i][j] == INF)
                cout << "INF ";
            else
                cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> cost = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };
    APSP(cost);
}