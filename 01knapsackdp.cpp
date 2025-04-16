#include <iostream>
using namespace std;

const int MAX_N = 100; 
const int MAX_W = 1000; 

int knapsack(int weights[], int values[], int n, int W) {
    int dp[MAX_N + 1][MAX_W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(
                    values[i - 1] + dp[i - 1][w - weights[i - 1]],
                    dp[i - 1][w]                                   
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int weights[] = {1, 4, 7, 9};
    int values[] = {10, 30, 50, 60};
    int n = 4;          
    int W = 8;          

    int maxValue = knapsack(weights, values, n, W);
    cout << "Maximum value in knapsack = " << maxValue << endl;

    return 0;
}
