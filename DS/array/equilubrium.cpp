#include <bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int a, int b)
{
    return arr[b] - arr[a - 1];
}

int calculateEquilubrium(int arr[], int n, int dp[])
{
    for (int i = 0; i < n; i++)
    {
        int lsum = arrSum(dp, 0, i - 1), rsum = arrSum(dp, i + 1, n - 1);
        if (lsum == rsum)
            return arr[i];
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], dp[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        dp[0] = arr[0];
        for (int i = 0; i < n; i++)
        {
            dp[i] = dp[i - 1] + arr[i];
        }
        int eqpt = calculateEquilubrium(arr, n, dp);
        cout << eqpt << "\n";
    }
    return 0;
}