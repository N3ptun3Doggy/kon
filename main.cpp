#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int dp[100][100];
    cout << "Enter: ";
    cin >> n >> m;
    dp[1][1]=1;
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
        dp[i][j]=dp[i-1][j-2]+dp[i-2][j-1];
    cout << "Answer: " << dp[n][m];
    return 0;
}
