#include<bits/stdc++.h>
using namespace std;
int triangle_count(int n)
{
    if(n<3) return 0;
    return (n*(n-1)*(n-3))/6;
}

int main()
{
    int n=8;
    int m=3;
    int valid=triangle_count(n);
    int not_valid=triangle_count(m);
    cout<<valid-not_valid;
}