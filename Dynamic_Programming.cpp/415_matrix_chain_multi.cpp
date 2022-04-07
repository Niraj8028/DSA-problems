
#include <bits/stdc++.h>
using namespace std;

int matrixMultiplication(int N, int A[])
{
    int dp[N][N];
    memset(dp, 0, sizeof dp);
    for (int L = 2; L <= N; L++)
        for (int i = 1; i + L - 1 < N; i++)
        {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + A[i - 1] * A[k] * A[j]);
        }
    return dp[1][N - 1];
}

int main()
{

    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << matrixMultiplication(N, arr) << endl;

    return 0;
}