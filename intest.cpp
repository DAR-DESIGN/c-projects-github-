#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    int count;
    count = 0;
    int n, k;
    ll ti;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ti;
        if (ti % k == 0)
        {
            count++;
        }

        /* code */
    }
    cout << count << endl;
}