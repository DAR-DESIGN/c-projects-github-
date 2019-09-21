#include <iostream>
using namespace std;
int main()
{
    int t;
    int a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
        /* code */
    }
    
    return 0;
}