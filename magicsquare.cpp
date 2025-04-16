#include<bits/stdc++.h>
using namespace std;
void magic_sqaure(int n)
{
    int sqaure[5][5]={0};
    int row=0,col=n/2;
    for(int num=1;num<=n*n;num++)
    {
        sqaure[row][col]=num;
        int nextrow=(row-1+n)%n;
        int nextcol=(col+1)%n;
        if(sqaure[nextrow][nextcol]!=0)
        {
            row=(row+1)%n;                   // If the position is already filled, move down
        }
        else
        {
            row=nextrow;
            col=nextcol;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sqaure[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    magic_sqaure(5);
}