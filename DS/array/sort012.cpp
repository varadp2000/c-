#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int z = 0, o = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            z++;
        if (arr[i] == 1)
            o++;
        if (arr[i] == 2)
            t++;
    }
    int i = 0;
    while (z--)
    {
        arr[i] = 0;
        i++;
    }
    while (o--)
    {
        arr[i] = 1;
        i++;
    }
    while (t--)
    {
        arr[i] = 2;
        i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}