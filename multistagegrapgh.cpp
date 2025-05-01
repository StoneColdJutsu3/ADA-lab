#include<bits/stdc++.h>
using namespace std;

int stage(vector<vector<int>> &graph)
{
    int k=1;
    int u=0;
    for(int v=u+1;v<graph.size();v++)
    {
        // cout<<"Stage no:"<<k;
        // if(graph[u][v]==0)
        // {
        //     cout<<v<<"\t";
        // }
        if(graph[u][v])
        {
            u=v;
            k++;
        }
    }
    return k;
}

void MSG(vector<vector<int>> &graph,int k,vector<int> &p)
{
    int n=graph.size();
    vector<int> fdist(n , INT_MAX);  // Distance array
    vector<int> d(n , 0);  // Stores the next vertex in the minimum-cost path

    fdist[n-1] = 0;

    for(int j=n-2;j>=0;j--)
    {
        int r = -1;
        int min_cost = INT_MAX;
        for(int v=j+1;v<n;v++)
        {
            if(graph[j][v]!=0 && graph[j][v]+fdist[v]<min_cost)
            {
                min_cost=graph[j][v]+fdist[v];
                r=v;
            }
        }
        fdist[j]=min_cost;
        d[j]=r;
    }

    p[1]=0;
    p[k]=n-1;
    for(int j=2;j<k;j++)
    {
        p[j] = d[p[j - 1]];
    }
    
}

int main()
{
    vector<vector<int>> graph={
        {0,3,7,5,0,0,0},
        {0,0,0,0,1,6,0},
        {0,0,0,0,2,0,0},
        {0,0,0,0,0,8,0},
        {0,0,0,0,0,0,4},
        {0,0,0,0,0,0,9},
        {0,0,0,0,0,0,0}

        // {0, 1, 1, 0, 0, 0},
        // {0, 0, 0, 1, 0, 0},
        // {0, 0, 0, 1, 1, 0},
        // {0, 0, 0, 0, 0, 1},
        // {0, 0, 0, 0, 0, 1},
        // {0, 0, 0, 0, 0, 0}
    };

    int k=stage(graph);
    vector<int> p(k,0);

    MSG(graph,k,p);
    cout << "Minimum-cost path: ";
    for (int i = 1; i <= k; ++i) 
    {
        cout << p[i] << " ";
    }

    // cout<<"No. of Stages="<<k<<endl;

}
