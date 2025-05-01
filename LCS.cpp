#include <bits/stdc++.h>
using namespace std;
string printLCS(vector<vector<int>> &c, string x, string y)
{
    int i = x.length();
    int j = y.length();
    string lcs = "";

    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            lcs += x[i - 1]; // character is part of LCS
            i--;
            j--;
        }
        else if (c[i - 1][j] > c[i][j - 1])
            i--;
        else
            j--;
    }

    reverse(lcs.begin(), lcs.end()); // since we built it backwards
    return lcs;
}

void lcs(string x, string y)
{
    int m = x.length(), n = y.length();
    vector<vector<int>> c(m + 1, vector<int>(n + 1, -1));
    for (int i = 0; i <= m; i++)
        c[i][0] = 0;
    for (int j = 0; j <= n; j++)
        c[0][j] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i - 1] == y[j - 1])
                c[i][j] = c[i - 1][j - 1] + 1;
            else
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
        }
    }
    string result = printLCS(c, x, y);
    cout << "Length of LCS: " << c[m][n] << endl;
    cout << "Longest Common Subsequence is: " << result << endl;
}

int main()
{
    string x = "bdcaba";
    string y = "abcbdab";
    lcs(x, y);
}