#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    long double y;
    cin >> x;
    cin >> y;
    double add = 0.50;
    bool b = y > ((double)x + add);
    if (x % 5 == 0 && b)
    {
        cout << (y - ((double)x + add)) << "\n";
        /* code */
    }
    else
    {
        cout << (long double)y << "\n";
        /* code */
    }
}