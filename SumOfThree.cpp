#include <iostream>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    if (n <7)
    {

        cout << "NO\n";
        return;
    }

    int a[3] = {2,1, n - 3};

    if (a[2] % 3 == 0)
    {
        a[2] -= 2;
        a[0] += 2;
    }

    if (a[0] % 3 == 0 || a[0]==a[2])
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout<<"\n";

    return;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
        sol();

    return 0;
}