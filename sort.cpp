#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    sort(arr, arr + n);
    for (int x : arr)
    {
        cout << x << endl;
    }
    return 0;
}