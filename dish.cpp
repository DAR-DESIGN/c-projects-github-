#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;
    freopen("dishin.txt", "rt", stdin);
    freopen("dishout.txt", "w", stdout);

    int n;
    cin >> n;
    int s = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
        /* code */
    }
    sort(arr, arr + n);
    int min = arr[0];
    int max = arr[n - 1];
    int mean = (int)s / n;
    cout << min << " " << max << " " << mean;
    return 0;
}