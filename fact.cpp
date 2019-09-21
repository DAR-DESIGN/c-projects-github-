#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int facto(int n)
{
    if (n > 1)
    {
        ll f = 1;
        for (int i = 1; i <= n; i++)
        {
            f *= i;
            /* code */
        }
        return f;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int t;
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    ll out;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        out = facto(n);
        cout << out << endl;

        /* code */
    }
    return 0;
}