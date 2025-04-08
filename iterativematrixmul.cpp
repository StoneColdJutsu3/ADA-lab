#include<bits/stdc++.h>
using namespace std;
void matrixmul(vector<vector<int>> &a,vector<vector<int>> &b,vector<vector<int>> &c)
{
    int r1=a.size();
    int c1=a[0].size();
    int r2=b.size();
    int c2=b[0].size();
    if(c1!=r2)
    cout<<"Multiplication not allowed"<<endl;
    c.resize(r1, vector<int>(c2, 0));
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}

int main()
{
    vector<vector<int>> a={{1,2},{3,4}};
    vector<vector<int>> b={{1,2},{3,4}};
    vector<vector<int>> c;
    matrixmul(a,b,c);
    for(int i=0;i<c.size();i++)
    {
        for(int j=0;j<c[0].size();j++)
        cout<<c[i][j]<<" ";
        cout<<endl;
    }

}