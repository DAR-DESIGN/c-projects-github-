#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int calc(ll n)
{
    int dig;
    ll sum = 0;
    while (n != 0)
    {
        dig = n % 10;
        sum += dig;
        n /= 10;

        /* code */
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    ll n, out;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        out = calc(n);
        cout << out << endl;

        /* code */
    }
    return 0;
}
